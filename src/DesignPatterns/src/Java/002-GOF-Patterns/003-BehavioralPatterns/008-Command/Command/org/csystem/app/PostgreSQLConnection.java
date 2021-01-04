package org.csystem.app;

import java.io.IOException;

public class PostgreSQLConnection implements IConnection {
    private final String m_url;
    private final String m_username;
    private final String m_password;
    //...

    public PostgreSQLConnection(String url, String username, String password)
    {
        m_url = url;
        m_username = username;
        m_password = password;
    }

    @Override
    public IStatement prepareStatement(String sqlText)
    {
        return new PostgreSQLStatement(sqlText, this);
    }

    @Override
    public void connect()
    {
        System.out.printf("URL:%s%n", m_url);
        System.out.printf("Username:%s%n", m_username);
        System.out.printf("Password:%s%n", m_password);
    }

    @Override
    public void send(String sqlCmd)
    {
        System.out.printf("Command:%s%n", sqlCmd);
    }

    @Override
    public void close() throws IOException
    {
        System.out.println("PostgreSQLConnection.close");
    }
}
