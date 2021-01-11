package org.csystem.invoiceapp.data.repository;

import org.csystem.invoiceapp.data.entity.Invoice;
import org.csystem.util.data.wrapper.DbUtil;
import org.springframework.stereotype.Component;

import java.time.LocalDate;
import java.util.Optional;

@Component
public class InvoiceAppDbHelper {
    private final IInvoiceRepository m_invoiceRepository;

    public InvoiceAppDbHelper(IInvoiceRepository invoiceRepository)
    {
        m_invoiceRepository = invoiceRepository;
    }

    public  long invoicesCount()
    {
        return DbUtil.doWorkForRepository(m_invoiceRepository::count, "count");
    }

    public Invoice saveInvoice(Invoice invoice)
    {
        return DbUtil.doWorkForRepository(() -> m_invoiceRepository.save(invoice), "saveInvoice");
    }

    public Iterable<Invoice> findAllInvoices()
    {
        return DbUtil.doWorkForRepository(m_invoiceRepository::findAll, "findAllInvoices");
    }

    public Iterable<Invoice> findInvoicesByMonth(int month)
    {
        return DbUtil.doWorkForRepository(() -> m_invoiceRepository.findInvoicesByMonth(month), "findInvoicesByMonth");
    }

    public Iterable<Invoice> findInvoicesByDate(LocalDate date)
    {
        return DbUtil.doWorkForRepository(() -> m_invoiceRepository.findByDate(date), "findInvoicesByDate");
    }

    public Optional<Invoice> findInvoiceById(int id)
    {
        return DbUtil.doWorkForRepository(() -> m_invoiceRepository.findById(id), "InvoiceAppDbHelper.findInvoiceById");
    }
}
