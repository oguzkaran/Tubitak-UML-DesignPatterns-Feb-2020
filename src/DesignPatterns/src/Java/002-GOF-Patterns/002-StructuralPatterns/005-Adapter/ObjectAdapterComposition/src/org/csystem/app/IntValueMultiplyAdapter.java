package org.csystem.app;

public class IntValueMultiplyAdapter {
    private IntValue m_intValue;
    private int m_value;

    public IntValueMultiplyAdapter(int value, int val)
    {
        m_intValue = IntValue.of(value);
        m_value = val;
    }


    public int getValue()
    {
        return m_value * m_intValue.getValue();
    }
}
