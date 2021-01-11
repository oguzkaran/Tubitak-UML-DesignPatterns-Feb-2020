package org.csystem.invoiceclientserviceapp.mapper;

import org.csystem.invoiceclientserviceapp.client.InvoiceViewModel;
import org.csystem.invoiceclientserviceapp.data.entity.InvoiceInfo;
import org.mapstruct.Mapper;

@Mapper(implementationName = "InvoiceInfoMapper", componentModel = "spring")
public interface IInvoiceInfoMapper {
    InvoiceViewModel invoiceInfoToInvoiceViewModel(InvoiceInfo invoiceInfo);
    InvoiceInfo invoiceInfoViewModelToInvoiceInfo(InvoiceViewModel invoiceViewModel);
}
