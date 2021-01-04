package org.csystem.util;

import java.util.Iterator;
import java.util.NoSuchElementException;

public class IntRange implements Iterable<Integer> {
    private final int m_min;
    private final int m_max;
    private final int m_inc;

    public IntRange(int min, int max)
    {
        this(min, max, 1);
    }

    public IntRange(int min, int max, int inc)
    {
        m_min = min;
        m_max = max;
        m_inc = inc;
    }

    @Override
    public Iterator<Integer> iterator()
    {
        return new Iterator<Integer>() {
            private int m_index = -1;

            @Override
            public boolean hasNext()
            {
                return m_min + (m_index + 1) * m_inc <= m_max;
            }

            @Override
            public Integer next()
            {
                if (!hasNext())
                    throw new NoSuchElementException("No such element");

                return m_min + ++m_index * m_inc;
            }
        };
    }
}
