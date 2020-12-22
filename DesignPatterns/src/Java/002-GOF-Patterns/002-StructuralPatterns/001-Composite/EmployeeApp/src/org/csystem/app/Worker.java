package org.csystem.app;

public class Worker extends Employee {
    private int m_hourPerDay;
    private double m_feePerHour;

    public Worker(String citizenId, String title, String name, String address, int hourPerDay, double feePerHour)
    {
        super(citizenId, title, name, address);
        m_hourPerDay = hourPerDay;
        m_feePerHour = feePerHour;
    }

    public int getHourPerDay()
    {
        return m_hourPerDay;
    }

    public void setHourPerDay(int hourPerDay)
    {
        m_hourPerDay = hourPerDay;
    }

    public double getFeePerHour()
    {
        return m_feePerHour;
    }

    public void setFeePerHour(double feePerHour)
    {
        m_feePerHour = feePerHour;
    }

    @Override
    public double calculateInsurance()
    {
        return m_feePerHour * m_hourPerDay * 30;
    }
}
