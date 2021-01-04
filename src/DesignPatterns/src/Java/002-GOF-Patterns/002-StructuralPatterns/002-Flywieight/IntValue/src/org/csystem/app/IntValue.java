package org.csystem.app;

public class IntValue {
    private final int m_val;
    private static IntValue [] ms_cache = new IntValue[256];

    private IntValue(int val)
    {
        m_val = val;
    }

    public int getVal()
    {
        return m_val;
    }

    public static IntValue valueOf(int val) //Factory method
    {
        if (val < -128 || val > 127)
            return new IntValue(val);

        if (ms_cache[val + 128] == null)
            ms_cache[val + 128] = new IntValue(val);

        return ms_cache[val + 128];
    }
}
