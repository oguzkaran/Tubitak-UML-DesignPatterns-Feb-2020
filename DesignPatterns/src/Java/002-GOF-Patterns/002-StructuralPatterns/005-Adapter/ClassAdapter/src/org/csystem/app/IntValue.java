package org.csystem.app;

public class IntValue {
    private int m_value;

    public IntValue()
    {}

    public IntValue(int value)
    {
        m_value = value;
    }

    public int getValue()
    {
        return m_value;
    }

    public void setValue(int value)
    {
        m_value = value;
    }

    @Override
    public String toString()
    {
        return m_value + "";
    }
}
