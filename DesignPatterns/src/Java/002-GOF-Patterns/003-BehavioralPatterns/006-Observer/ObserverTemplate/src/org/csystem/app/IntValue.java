package org.csystem.app;

public class IntValue extends Observable<IntValue>{
    private int m_value;

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
        if (value == m_value)
            return;

        int oldValue = m_value;

        m_value = value;
        notifyDataChanged(new IntValue(oldValue), this);
    }

    @Override
    public boolean equals(Object obj)
    {
        if ((obj instanceof IntValue))
            return false;

        return ((IntValue)obj).m_value == m_value;
    }

    @Override
    public int hashCode()
    {
        return m_value;
    }

    @Override
    public void notifyDataChanged(IntValue oldVal, IntValue newVal)
    {
        super.notifyDataChanged(oldVal, newVal);
    }

    @Override
    public void attach(IObserver<IntValue> observer)
    {
        if (observer == null)
            throw new IllegalArgumentException();
        super.attach(observer);
    }
}
