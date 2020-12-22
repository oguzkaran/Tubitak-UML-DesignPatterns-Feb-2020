package org.csystem.app;

public class IntValueMultiplyAdapter extends IntValue {
    private int m_value;

    public IntValueMultiplyAdapter(int value, int val)
    {
        super(value);
        m_value = val;
    }

    @Override
    public int getValue()
    {
        return m_value * super.getValue();
    }

    @Override
    public void setValue(int value)
    {
        m_value = value;
    }

    public void setIntValue(int val)
    {
        super.setValue(val);
    }
}
