package org.csystem.invoiceapp.dto;

import java.math.BigDecimal;
import java.time.LocalDate;

public class InvoiceDTO {
    private int m_id;
    private String m_name;
    private LocalDate m_date;
    private BigDecimal m_total;

    public InvoiceDTO()
    {
        this(0, "", null, BigDecimal.ZERO);
    }

    public InvoiceDTO(int id, String name, LocalDate date, BigDecimal total)
    {
        m_id = id;
        m_name = name;
        m_date = date;
        m_total = total;
    }

    public int getId()
    {
        return m_id;
    }

    public void setId(int id)
    {
        m_id = id;
    }

    public String getName()
    {
        return m_name;
    }

    public void setName(String name)
    {
        m_name = name;
    }

    public LocalDate getDate()
    {
        return m_date;
    }

    public void setDate(LocalDate date)
    {
        m_date = date;
    }

    public BigDecimal getTotal()
    {
        return m_total;
    }

    public void setTotal(BigDecimal total)
    {
        m_total = total;
    }
}
