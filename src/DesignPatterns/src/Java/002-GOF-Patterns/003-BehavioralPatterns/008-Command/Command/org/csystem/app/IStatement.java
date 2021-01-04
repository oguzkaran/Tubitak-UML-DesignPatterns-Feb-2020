package org.csystem.app;

import java.io.Closeable;

public interface IStatement extends Closeable {
    int executeUpdate();
    ResultSet executeQuery();
}
