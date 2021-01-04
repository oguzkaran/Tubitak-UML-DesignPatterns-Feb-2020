package org.csystem.app;

public class Manager extends Employee {
    private double m_salary;
    private String m_department;

    public Manager(String citizenId, String title, String name, String address,double salary, String department)
    {
        super(citizenId, title, name, address);
        m_salary = salary;
        m_department = department;
    }

    public double getSalary()
    {
        return m_salary;
    }

    public void setSalary(double salary)
    {
        m_salary = salary;
    }

    public String getDepartment()
    {
        return m_department;
    }

    public void setDepartment(String department)
    {
        m_department = department;
    }

    @Override
    public double calculateInsurance()
    {
        return m_salary * 1.4;
    }
}
