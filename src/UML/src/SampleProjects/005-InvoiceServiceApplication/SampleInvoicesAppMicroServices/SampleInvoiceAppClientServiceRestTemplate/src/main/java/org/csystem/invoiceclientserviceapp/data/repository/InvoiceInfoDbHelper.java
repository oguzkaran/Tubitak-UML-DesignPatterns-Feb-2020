package org.csystem.invoiceclientserviceapp.data.repository;

import org.csystem.invoiceclientserviceapp.data.entity.InvoiceInfo;
import org.springframework.stereotype.Component;

import java.util.Optional;

@Component
public class InvoiceInfoDbHelper {
    private final IInvoiceInfoRepository m_invoiceInfoRepository;

    public InvoiceInfoDbHelper(IInvoiceInfoRepository invoiceInfoRepository)
    {
        m_invoiceInfoRepository = invoiceInfoRepository;
    }

    public Optional<InvoiceInfo> findInvoiceById(int id)
    {
        return m_invoiceInfoRepository.findById(id);
    }

    public InvoiceInfo saveInvoice(InvoiceInfo invoiceInfo)
    {
        return m_invoiceInfoRepository.save(invoiceInfo);
    }
}
