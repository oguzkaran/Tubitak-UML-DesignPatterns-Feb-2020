package org.csystem.app.modemapp;

import java.io.Closeable;
import java.io.IOException;

public class MyModem implements Closeable, IConnection, ITransmission {
    private MyConnection m_connection;
    private MyTransmission m_transmission;
    //...

    public MyModem()
    {
        m_connection = new MyConnection();
        m_transmission = new MyTransmission();
        m_connection.connect();
    }

    //...


    @Override
    public boolean connect()
    {
        return m_connection.connect();
    }

    @Override
    public boolean disconnect()
    {
        return m_connection.disconnect();
    }

    @Override
    public void send(String msg)
    {
        m_transmission.send(msg);
    }

    @Override
    public String receive()
    {
        return m_transmission.receive();
    }

    @Override
    public void close() throws IOException
    {
        m_connection.disconnect();
    }
}
