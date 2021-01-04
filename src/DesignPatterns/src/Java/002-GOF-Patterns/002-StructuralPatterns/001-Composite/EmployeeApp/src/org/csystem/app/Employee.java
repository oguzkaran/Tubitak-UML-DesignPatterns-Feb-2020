package org.csystem.app;

import java.util.ArrayList;
import java.util.List;

public abstract class Employee {
    private String m_citizenId;
    private String m_title;
    private String m_name;
    private String m_address;
    private List<Employee> m_employees = new ArrayList<>();

    public Employee(String citizenId, String title, String name, String address)
    {
        m_citizenId = citizenId;
        m_title = title;
        m_name = name;
        m_address = address;
    }

    public String getCitizenId()
    {
        return m_citizenId;
    }

    public void setCitizenId(String citizenId)
    {
        m_citizenId = citizenId;
    }

    public String getName()
    {
        return m_name;
    }

    public void setName(String name)
    {
        m_name = name;
    }

    public String getAddress()
    {
        return m_address;
    }

    public void setAddress(String address)
    {
        m_address = address;
    }

    public void addEmployee(Employee employee)
    {
        //...
        m_employees.add(employee);
    }

    public Employee get(int i)
    {
        return m_employees.get(i);
    }

    public int size()
    {
        return m_employees.size();
    }

    public abstract double calculateInsurance();
}
