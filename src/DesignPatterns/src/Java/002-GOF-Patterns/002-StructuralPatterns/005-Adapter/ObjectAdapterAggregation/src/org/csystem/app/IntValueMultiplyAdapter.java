package org.csystem.app;

public class IntValueMultiplyAdapter {
    private IntValue m_intValue;
    private int m_value;

    public IntValueMultiplyAdapter(IntValue intValue, int val)
    {
        m_intValue = intValue;
        m_value = val;
    }


    public int getValue()
    {
        return m_value * m_intValue.getValue();
    }
}
