package org.csystem.app.modemapp;

import java.io.Closeable;
import java.io.IOException;

public class Modem implements Closeable {
    private IConnection m_connection;
    private ITransmission m_transmission;
    //...

    public Modem(IConnection connection, ITransmission transmission)
    {
        m_connection = connection;
        m_transmission = transmission;
        m_connection.connect();
    }

    //...

    public void sendMessage(String msg)
    {
        m_transmission.send(msg);
    }

    public String receiveMessage()
    {
        return m_transmission.receive();
    }

    @Override
    public void close() throws IOException
    {
        m_connection.disconnect();
    }
}
