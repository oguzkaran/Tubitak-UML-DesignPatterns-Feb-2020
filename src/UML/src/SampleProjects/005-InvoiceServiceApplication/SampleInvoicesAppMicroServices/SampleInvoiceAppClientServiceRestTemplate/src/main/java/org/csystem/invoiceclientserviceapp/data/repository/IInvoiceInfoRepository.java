package org.csystem.invoiceclientserviceapp.data.repository;

import org.csystem.invoiceclientserviceapp.data.entity.InvoiceInfo;
import org.springframework.data.repository.CrudRepository;

public interface IInvoiceInfoRepository extends CrudRepository<InvoiceInfo, Integer> {

}
