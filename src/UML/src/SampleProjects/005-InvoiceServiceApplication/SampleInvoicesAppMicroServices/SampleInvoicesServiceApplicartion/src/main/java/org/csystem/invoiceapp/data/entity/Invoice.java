package org.csystem.invoiceapp.data.entity;

import javax.persistence.*;
import java.math.BigDecimal;
import java.time.LocalDate;

@Entity
@Table(name = "invoices")
public class Invoice { //POJO (Plain Old Java Object)
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "invoice_id")
    private int id;

    @Column(name = "name", nullable = false)
    private String name;

    @Column(name = "address", nullable = false)
    private String address;

    @Column(name = "date", nullable = false)
    private LocalDate date;

    @Column(name = "total", nullable = false)
    private BigDecimal total;

    public Invoice()
    {}

    public Invoice(String name, String address, LocalDate date, BigDecimal total)
    {
        this(0, name, address, date, total);
    }

    public Invoice(int id, String name, String address, LocalDate date, BigDecimal total)
    {
        //...
        this.id = id;
        this.name = name;
        this.address = address;
        this.date = date;
        this.total = total;
    }

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

    public String getAddress()
    {
        return address;
    }

    public void setAddress(String address)
    {
        this.address = address;
    }

    public LocalDate getDate()
    {
        return date;
    }

    public void setDate(LocalDate date)
    {
        this.date = date;
    }

    public BigDecimal getTotal()
    {
        return total;
    }

    public void setTotal(BigDecimal total)
    {
        this.total = total;
    }
}
