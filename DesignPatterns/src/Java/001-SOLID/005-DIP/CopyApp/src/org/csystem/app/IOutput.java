package org.csystem.app;

public interface IOutput {
    void write(int data);
    default void write(byte [] buf, int startIndex, int len)
    {
        for (int i = startIndex; i < len; ++i)
            write(buf[i]);
    }
}
