package org.csystem.invoiceapp.contorller;

import org.csystem.invoiceapp.dto.CountDTO;
import org.csystem.invoiceapp.dto.InvoiceDTO;
import org.csystem.invoiceapp.service.InvoiceAppService;
import org.csystem.util.exception.ExceptionUtil;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.time.LocalDate;
import java.util.ArrayList;

@RestController
@RequestMapping("api/invoices")
public class InvoiceController {
    private final InvoiceAppService m_invoiceAppService;

    private Iterable<InvoiceDTO> getInvoicesByMonthExceptionHandler(String monthStr)
    {
        int month = Integer.parseInt(monthStr);

        if (month <= 0)
            month = LocalDate.now().getMonthValue();

        return m_invoiceAppService.findInvoicesByMonth(month);
    }

    private ResponseEntity<Iterable<InvoiceDTO>> getInvoicesByMonthExceptionHandlingHandlerResponseEntity(String monthStr)
    {
        int month = Integer.parseInt(monthStr);

        if (month <= 0)
            month = LocalDate.now().getMonthValue();

        return ResponseEntity.ok(m_invoiceAppService.findInvoicesByMonth(month));
    }

    public ResponseEntity<Iterable<InvoiceDTO>> getInvoicesByMonthExceptionHandler(Throwable ex)
    {
        return ResponseEntity.badRequest().body(new ArrayList<>());
    }

    private Iterable<InvoiceDTO> getInvoicesByDateInfoHandler(int day, int month, int year)
    {
        if (year <= 0)
            year = LocalDate.now().getYear();

        return m_invoiceAppService.findInvoicesByDate(LocalDate.of(year, month, day));
    }

    public InvoiceController(InvoiceAppService invoiceAppService)
    {
        m_invoiceAppService = invoiceAppService;
    }

    @GetMapping("/all")
    public Iterable<InvoiceDTO> getAllInvoices() //Veri çok fazlaysa bu şekilde gönderilmemesi gerekir
    {
        return ExceptionUtil.subscribe(m_invoiceAppService::findAllInvoices, ex -> new ArrayList<>());
    }

    @GetMapping("/count")
    public CountDTO getInvoicesCount()
    {
        return ExceptionUtil.subscribe(m_invoiceAppService::getInvoicesCount, ex -> new CountDTO("internal error", 0));
    }

    @GetMapping("/invoicemonth")
    public Iterable<InvoiceDTO> getInvoicesByMonth(@RequestParam(value = "mon", required = false, defaultValue = "0") int month)
    {
        if (month <= 0) //Bu kısım service bırakılabilir
            month = LocalDate.now().getMonthValue();

        return m_invoiceAppService.findInvoicesByMonth(month);
    }

    @GetMapping("/invoicemontheh")
    public Iterable<InvoiceDTO> getInvoicesByMonthExceptionHandling(@RequestParam(value = "mon", required = false, defaultValue = "0") String monthStr)
    {
        return ExceptionUtil.subscribe(() -> getInvoicesByMonthExceptionHandler(monthStr), ex -> new ArrayList<>());
    }

    @GetMapping("/invoicemonthehre")
    public ResponseEntity<Iterable<InvoiceDTO>> getInvoicesByMonthExceptionHandlingResponseEntity(@RequestParam(value = "mon", required = false, defaultValue = "0") String monthStr)
    {
        return ExceptionUtil.subscribe(() -> getInvoicesByMonthExceptionHandlingHandlerResponseEntity(monthStr), this::getInvoicesByMonthExceptionHandler);
    }

    @GetMapping("/invoicedate")
    public Iterable<InvoiceDTO> getInvoicesByDateInfo(
            @RequestParam(value = "day") int day,
            @RequestParam(value = "mon") int month,
            @RequestParam(value = "year", required = false, defaultValue = "0") int year)
    {
        return ExceptionUtil.subscribe(() -> getInvoicesByDateInfoHandler(day, month, year), ex -> new ArrayList<>());
    }

    @PostMapping("/save")
    public InvoiceDTO saveInvoice(@RequestBody InvoiceDTO invoiceDTO)
    {
        return ExceptionUtil.subscribe(() -> m_invoiceAppService.saveInvoice(invoiceDTO), ex -> invoiceDTO);
    }

    @GetMapping("/invoice/{id}")
    public InvoiceDTO getInvoiceById(@PathVariable("id") int id)
    {
        return ExceptionUtil.subscribe(() -> m_invoiceAppService.findInvoiceById(id), ex -> new InvoiceDTO());
    }
}
