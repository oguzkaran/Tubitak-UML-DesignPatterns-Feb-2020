package org.csystem.invoiceapp.dto;

public class CountDTO {
    private String m_name;
    private long m_count;

    public CountDTO()
    {}

    public CountDTO(String name, long count)
    {
        m_name = name;
        m_count = count;
    }

    public String getName()
    {
        return m_name;
    }

    public void setName(String name)
    {
        m_name = name;
    }

    public long getCount()
    {
        return m_count;
    }

    public void setCount(long count)
    {
        m_count = count;
    }
}
