package org.csystem.app;

import java.util.ArrayList;

public class IntValue {
    private int m_value;
    private final ArrayList<Observer<IntValue>> m_observers = new ArrayList<>();            ;

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
        notifyDataChanged(oldValue);
    }

    public void attach(Observer<IntValue> observer)
    {
        //...
        m_observers.add(observer);
    }

    public void notifyDataChanged(int oldValue)
    {
        m_observers.forEach(o -> o.update(new IntValue(oldValue), this));
    }
}
