package org.csystem.util.io;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

public class IOUtil {
    //...
    public static void copy(InputStream src, OutputStream dest, int blockSize) throws IOException
    {
        int read;
        byte [] buf = new byte[blockSize];

        while ((read = src.read(buf)) > 0)
            dest.write(buf, 0, read);

        dest.flush();
    }
}
