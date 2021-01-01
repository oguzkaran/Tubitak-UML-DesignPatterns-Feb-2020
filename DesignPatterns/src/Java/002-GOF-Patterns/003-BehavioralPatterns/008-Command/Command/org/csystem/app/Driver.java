package org.csystem.app;

import java.io.Closeable;
import java.io.IOException;

public final class Driver {
    private Driver()
    {
    }

    //...

    public static IConnection getConnection(String url, String username, String password)
    {
        //...
        return new PostgreSQLConnection(url, username, password);
    }
}
