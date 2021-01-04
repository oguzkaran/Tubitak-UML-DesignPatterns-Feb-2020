package org.csystem.app;

public interface ICompactDevice {
    default void sendFax()
    {
        throw new UnsupportedOperationException();
    }
    default void print()
    {
        throw new UnsupportedOperationException();
    }
    default void scan()
    {
        throw new UnsupportedOperationException();
    }
}
