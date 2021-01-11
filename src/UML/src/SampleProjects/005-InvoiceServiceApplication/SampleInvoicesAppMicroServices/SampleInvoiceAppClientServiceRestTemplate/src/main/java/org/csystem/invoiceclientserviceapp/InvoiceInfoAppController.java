package org.csystem.invoiceclientserviceapp;

import org.csystem.invoiceclientserviceapp.client.InvoiceViewModel;
import org.csystem.invoiceclientserviceapp.service.InvoiceInfoAppService;
import org.csystem.util.exception.ExceptionUtil;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/api/invoiceinfo")
public class InvoiceInfoAppController {
    private final InvoiceInfoAppService m_invoiceAppService;

    public InvoiceInfoAppController(InvoiceInfoAppService invoiceAppService)
    {
        m_invoiceAppService = invoiceAppService;
    }

    @GetMapping("/invoice")
    public InvoiceViewModel getInvoiceById(@RequestParam(value = "id", required = true) int id)
    {
        return ExceptionUtil.subscribe(() -> m_invoiceAppService.getInvoiceById(id), ex -> new InvoiceViewModel());
    }
}
