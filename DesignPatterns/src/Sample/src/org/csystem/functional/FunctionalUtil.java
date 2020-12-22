package org.csystem.functional;

import java.util.function.Consumer;
import java.util.function.Predicate;

public final class FunctionalUtil {
    private FunctionalUtil() {}

    public static <T> int copyIf(T [] src, T [] dest, Predicate<T> pred)
    {
        int index = 0;

        for (T t : src)
            if (pred.test(t))
                dest[index++] = t;

        return index;
    }

    public static <T> void forEach(T [] a, int count, Consumer<T> con)
    {
        for (int i = 0; i < count; ++i)
            con.accept(a[i]);
    }
}
