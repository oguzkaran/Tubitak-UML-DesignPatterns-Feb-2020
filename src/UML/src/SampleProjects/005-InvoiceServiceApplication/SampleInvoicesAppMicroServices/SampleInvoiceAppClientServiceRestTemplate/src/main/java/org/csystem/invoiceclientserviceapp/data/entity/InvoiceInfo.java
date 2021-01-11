package org.csystem.invoiceclientserviceapp.data.entity;

import javax.persistence.*;
import java.math.BigDecimal;
import java.time.LocalDate;
import java.time.LocalDateTime;

@Entity
@Table(name = "invoices")
public class InvoiceInfo { //POJO
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "invoice_id")
    private int id;

    @Column(name = "name", nullable = false)
    private String name;

    @Column(name = "localdate", nullable = false)
    private LocalDate date;

    @Column(name = "total", nullable = false)
    private BigDecimal total;

    @Column(name = "query_date", nullable = false)
    private LocalDateTime queryDate = LocalDateTime.now();

    public int getId()
    {
        return id;
    }

    public void setId(int id)
    {
        this.id = id;
    }

    public String getName()
    {
        return name;
    }

    public void setName(String name)
    {
        this.name = name;
    }

    public LocalDate getDate()
    {
        return date;
    }

    public void setDate(LocalDate localDate)
    {
        this.date = localDate;
    }

    public BigDecimal getTotal()
    {
        return total;
    }

    public void setTotal(BigDecimal total)
    {
        this.total = total;
    }

    public LocalDateTime getQueryDate()
    {
        return queryDate;
    }

    public void setQueryDate(LocalDateTime queryDate)
    {
        this.queryDate = queryDate;
    }
}
