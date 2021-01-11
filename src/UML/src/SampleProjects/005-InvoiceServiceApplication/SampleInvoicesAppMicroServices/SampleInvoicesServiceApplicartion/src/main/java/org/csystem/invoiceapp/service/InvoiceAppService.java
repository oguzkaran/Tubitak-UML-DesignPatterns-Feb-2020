package org.csystem.invoiceapp.service;

import org.csystem.invoiceapp.data.entity.Invoice;
import org.csystem.invoiceapp.data.repository.InvoiceAppDbHelper;
import org.csystem.invoiceapp.dto.CountDTO;
import org.csystem.invoiceapp.dto.InvoiceDTO;
import org.csystem.invoiceapp.mapper.IInvoiceMapper;
import org.csystem.util.data.wrapper.DbUtil;
import org.springframework.stereotype.Service;

import java.awt.image.DataBufferUShort;
import java.time.LocalDate;
import java.util.stream.Collectors;
import java.util.stream.StreamSupport;

@Service
public class InvoiceAppService {
    private final InvoiceAppDbHelper m_invoiceAppDbHelper;
    private final IInvoiceMapper m_invoiceMapper;

    private Iterable<InvoiceDTO> getInvoiceDTOs(Iterable<Invoice> invoices)
    {
        return StreamSupport.stream(invoices.spliterator(), false)
                .map(m_invoiceMapper::invoiceToInvoiceDTO)
                .collect(Collectors.toList());
    }


    public InvoiceAppService(InvoiceAppDbHelper invoiceAppDbHelper, IInvoiceMapper invoiceMapper)
    {
        m_invoiceAppDbHelper = invoiceAppDbHelper;
        m_invoiceMapper = invoiceMapper;
    }

    public Iterable<InvoiceDTO> findAllInvoices()
    {
        return DbUtil.doWorkForService(() -> getInvoiceDTOs(m_invoiceAppDbHelper.findAllInvoices()), "findAllInvoices");
    }

    public CountDTO getInvoicesCount()
    {
        return DbUtil.doWorkForService(() -> new CountDTO("invoices", m_invoiceAppDbHelper.invoicesCount()), "InvoiceAppService.getInvoicesCount");
    }

    public Iterable<InvoiceDTO> findInvoicesByMonth(int month)
    {
        return DbUtil.doWorkForService(() -> getInvoiceDTOs(m_invoiceAppDbHelper.findInvoicesByMonth(month)), "findInvoicesByMonth");
    }

    public Iterable<InvoiceDTO> findInvoicesByDate(LocalDate date)
    {
        return DbUtil.doWorkForService(() -> getInvoiceDTOs(m_invoiceAppDbHelper.findInvoicesByDate(date)), "findInvoicesByDate");
    }

    public InvoiceDTO saveInvoice(InvoiceDTO invoiceDTO)
    {
        return DbUtil.doWorkForService(() -> m_invoiceMapper.invoiceToInvoiceDTO(m_invoiceAppDbHelper.saveInvoice(m_invoiceMapper.invoiceDTOToInvoice(invoiceDTO))),
                "saveInvoice");
    }

    public InvoiceDTO findInvoiceById(int id)
    {
        return DbUtil.doWorkForService(() -> m_invoiceMapper.invoiceToInvoiceDTO(m_invoiceAppDbHelper.findInvoiceById(id).orElse(new Invoice())),
                "findInvoiceById");
    }
}
