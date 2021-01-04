package org.csystem.app;

import java.io.FileInputStream;
import java.io.InvalidObjectException;

public class FileSource implements ISource {
    private FileInputStream m_fis;

    public FileSource(String filename)
    {
        try {
            m_fis = new FileInputStream(filename);
        }
        catch (Throwable ex) {
            throw new IllegalArgumentException(ex.getMessage(), ex);
        }
    }

    @Override
    public int getChar()
    {
        try {
            return m_fis.read();
        }
        catch (Throwable ex) {
            throw new UnsupportedOperationException(ex.getMessage(), ex);
        }
    }
}
