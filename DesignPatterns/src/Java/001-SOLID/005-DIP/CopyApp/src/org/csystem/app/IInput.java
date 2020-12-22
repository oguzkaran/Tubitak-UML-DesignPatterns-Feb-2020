package org.csystem.app;

public interface IInput {
    int read();
    default int read(byte [] buf, int startIndex, int len)
    {
        int data;
        int i;

        for (i = startIndex; i < len && (data = read()) != -1; ++i)
            buf[i] = (byte)data;

        return i;
    }
}
