package org.csystem.invoiceapp.data.repository;

import org.csystem.invoiceapp.data.entity.Invoice;
import org.springframework.data.jpa.repository.Query;
import org.springframework.data.repository.CrudRepository;

import java.time.LocalDate;

interface  IInvoiceRepository extends CrudRepository<Invoice, Integer> {
    @Query(value = "select * from invoices where date_part('month', date)=?", nativeQuery = true)
    Iterable<Invoice> findInvoicesByMonth(int month);

    @Query("from Invoice invoice where invoice.date=:date") //HQL, JQL
    //@Query("select i from Invoice i where i.date=:date")
    Iterable<Invoice> findInvoicesByDate(LocalDate date);

    Iterable<Invoice> findByDate(LocalDate date);
}
