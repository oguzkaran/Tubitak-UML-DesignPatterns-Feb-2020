package org.csystem.invoiceapp.mapper;

import javax.annotation.processing.Generated;
import org.csystem.invoiceapp.data.entity.Invoice;
import org.csystem.invoiceapp.dto.InvoiceDTO;
import org.springframework.stereotype.Component;

@Generated(
    value = "org.mapstruct.ap.MappingProcessor",
    date = "2021-01-11T09:54:42+0300",
    comments = "version: 1.3.1.Final, compiler: javac, environment: Java 14 (Oracle Corporation)"
)
@Component
public class InvoiceMapperImpl implements IInvoiceMapper {

    @Override
    public InvoiceDTO invoiceToInvoiceDTO(Invoice invoice) {
        if ( invoice == null ) {
            return null;
        }

        InvoiceDTO invoiceDTO = new InvoiceDTO();

        invoiceDTO.setId( invoice.getId() );
        invoiceDTO.setName( invoice.getName() );
        invoiceDTO.setDate( invoice.getDate() );
        invoiceDTO.setTotal( invoice.getTotal() );

        return invoiceDTO;
    }

    @Override
    public Invoice invoiceDTOToInvoice(InvoiceDTO invoice) {
        if ( invoice == null ) {
            return null;
        }

        Invoice invoice1 = new Invoice();

        invoice1.setId( invoice.getId() );
        invoice1.setName( invoice.getName() );
        invoice1.setDate( invoice.getDate() );
        invoice1.setTotal( invoice.getTotal() );

        return invoice1;
    }
}
