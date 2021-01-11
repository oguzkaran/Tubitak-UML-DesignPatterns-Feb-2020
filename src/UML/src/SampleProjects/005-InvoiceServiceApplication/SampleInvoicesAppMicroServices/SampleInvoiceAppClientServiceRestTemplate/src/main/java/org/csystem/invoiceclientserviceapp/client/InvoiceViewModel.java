package org.csystem.invoiceclientserviceapp.client;

import java.math.BigDecimal;
import java.time.LocalDate;
import java.time.LocalDateTime;

public class InvoiceViewModel {
    private int m_id;
    private String m_name;
    private LocalDate m_date;
    private BigDecimal m_total;
    private LocalDateTime m_queryDate = LocalDateTime.now();

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

    public LocalDateTime getQueryDate()
    {
        return m_queryDate;
    }

    public void setQueryDate(LocalDateTime queryDate)
    {
        m_queryDate = queryDate;
    }
}
