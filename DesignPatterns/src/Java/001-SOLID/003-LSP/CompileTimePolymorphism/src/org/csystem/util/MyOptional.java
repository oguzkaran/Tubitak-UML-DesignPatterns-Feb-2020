package org.csystem.util;

public class MyOptional<T> {
    private Pair<T, Boolean> m_info;
    private MyOptional(Pair<T, Boolean> info)
    {
        m_info = info;
    }

    public T get()
    {
        return m_info.getFirst();
    }

    public boolean isEmpty()
    {
        return !isPresent();
    }

    public boolean isPresent()
    {
        return m_info.getSecond();
    }

    public static <T> MyOptional<T> empty()
    {
        return new MyOptional<>(Pair.create(null, false));
    }

    public static <T> MyOptional<T> of(T t)
    {
        return new MyOptional<>(Pair.create(t, true));
    }
    public static <T> MyOptional<T> ofNullable(T t)
    {
        return t == null ? empty() : of(t);
    }



    //...
}
