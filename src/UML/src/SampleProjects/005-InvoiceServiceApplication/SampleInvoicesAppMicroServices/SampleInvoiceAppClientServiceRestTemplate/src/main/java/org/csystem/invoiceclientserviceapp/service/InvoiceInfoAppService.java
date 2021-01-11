package org.csystem.invoiceclientserviceapp.service;

import org.csystem.invoiceclientserviceapp.client.InvoiceViewModel;
import org.csystem.invoiceclientserviceapp.data.repository.InvoiceInfoDbHelper;
import org.csystem.invoiceclientserviceapp.mapper.IInvoiceInfoMapper;
import org.csystem.util.data.wrapper.DbUtil;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Service;
import org.springframework.web.client.RestTemplate;

@Service
public class InvoiceInfoAppService {
    private final InvoiceInfoDbHelper m_invoiceInfoDbHelper;
    private final IInvoiceInfoMapper m_invoiceInfoMapper;
    private final RestTemplate m_restTemplate;

    @Value("${invoiceclientservice.url}")
    private String m_url;

    private InvoiceViewModel getInvoiceByIdCallback(int id)
    {
        var optional = m_invoiceInfoDbHelper.findInvoiceById(id);

        if (optional.isPresent())
            return m_invoiceInfoMapper.invoiceInfoToInvoiceViewModel(optional.get());

        var invoiceInfoViewModel = m_restTemplate.getForObject(m_url + id, InvoiceViewModel.class);

        m_invoiceInfoDbHelper.saveInvoice(m_invoiceInfoMapper.invoiceInfoViewModelToInvoiceInfo(invoiceInfoViewModel));

        return invoiceInfoViewModel;
    }

    public InvoiceInfoAppService(InvoiceInfoDbHelper invoiceInfoDbHelper, IInvoiceInfoMapper invoiceInfoMapper, RestTemplate restTemplate)
    {
        m_invoiceInfoDbHelper = invoiceInfoDbHelper;
        m_invoiceInfoMapper = invoiceInfoMapper;
        m_restTemplate = restTemplate;
    }

    public InvoiceViewModel getInvoiceById(int id)
    {
        return DbUtil.doWorkForService(() -> getInvoiceByIdCallback(id), "InvoiceInfoAppService.getInvoiceById");
    }
}
