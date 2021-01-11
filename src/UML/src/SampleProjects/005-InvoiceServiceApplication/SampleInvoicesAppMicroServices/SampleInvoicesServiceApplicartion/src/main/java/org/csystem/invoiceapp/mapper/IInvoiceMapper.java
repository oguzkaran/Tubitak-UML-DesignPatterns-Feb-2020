package org.csystem.invoiceapp.mapper;

import org.csystem.invoiceapp.data.entity.Invoice;
import org.csystem.invoiceapp.dto.InvoiceDTO;
import org.mapstruct.Mapper;

@Mapper(implementationName = "InvoiceMapperImpl", componentModel = "spring")
public interface IInvoiceMapper {
    InvoiceDTO invoiceToInvoiceDTO(Invoice invoice);
    Invoice invoiceDTOToInvoice(InvoiceDTO invoice);
}
