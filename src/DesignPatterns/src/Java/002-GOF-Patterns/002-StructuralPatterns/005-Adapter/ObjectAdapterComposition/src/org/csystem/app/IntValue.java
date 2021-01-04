package org.csystem.app;

public final class IntValue {
    private final int m_value;
    private static final IntValue[] ms_cache = new IntValue[256];

    private IntValue(int value)
    {
        m_value = value;
    }

    public int getValue()
    {
        return m_value;
    }

    public static IntValue of(int value)
    {
        if (value < -128 || value > 127)
            return new IntValue(value);

        if (ms_cache[128 + value] == null)
            ms_cache[128 + value] = new IntValue(value);

        return ms_cache[128 + value];
    }

    @Override
    public String toString()
    {
        return m_value + "";
    }
}
