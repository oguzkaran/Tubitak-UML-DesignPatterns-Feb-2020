package org.csystem.app;

import java.io.Closeable;

public interface IConnection extends Closeable {
    IStatement prepareStatement(String sqlText);
    void connect();
    void send(String sqlCmd);
}
