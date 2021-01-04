package org.csystem.app;

public class SalesManager extends Manager {
    private double m_extra;

    public SalesManager(String citizenId, String title, String name, String address, double salary, String department, double extra)
    {
        super(citizenId, title, name, address, salary, department);
        m_extra = extra;
    }

    public double getExtra()
    {
        return m_extra;
    }

    public void setExtra(double extra)
    {
        m_extra = extra;
    }

    @Override
    public double calculateInsurance()
    {
        return super.calculateInsurance() + m_extra;
    }
}
