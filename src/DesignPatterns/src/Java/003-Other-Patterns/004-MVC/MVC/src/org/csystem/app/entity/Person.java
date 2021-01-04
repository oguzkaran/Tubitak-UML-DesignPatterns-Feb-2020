package org.csystem.app.entity;

import java.io.Serializable;
import java.time.LocalDate;

public class Person implements Serializable {
    private int m_id;
    private String m_name;
    private LocalDate m_registerDate;

    public Person(int id, String name, LocalDate registerDate)
    {
        m_id = id;
        m_name = name;
        m_registerDate = registerDate;
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

    public LocalDate getRegisterDate()
    {
        return m_registerDate;
    }

    public void setRegisterDate(LocalDate registerDate)
    {
        m_registerDate = registerDate;
    }

    @Override
    public String toString()
    {
        return String.format("[%d]%s-%s", m_id, m_name, m_registerDate);
    }
}
