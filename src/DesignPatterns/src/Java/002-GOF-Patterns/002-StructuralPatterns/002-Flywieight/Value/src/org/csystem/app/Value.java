package org.csystem.app;

public class Value<T extends Number> {
    private T m_val;
    private T m_min, m_max;

    public Value(T min, T max)
    {
        m_min = min;
        m_max = max;
    }
}
