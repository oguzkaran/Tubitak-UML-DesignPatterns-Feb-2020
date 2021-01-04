package org.csystem.app;

import java.io.IOException;

public class PostgreSQLStatement implements IStatement {
    private final String m_sqlCmd;
    private final IConnection m_connection;
    //...
    public PostgreSQLStatement(String sqlCmd, IConnection connection)
    {
        m_sqlCmd = sqlCmd;
        m_connection = connection;
    }

    @Override
    public int executeUpdate()
    {
        System.out.println("PostgreSQLStatement.execute");
        m_connection.connect();
        m_connection.send(m_sqlCmd);
        return 0;
    }

    @Override
    public ResultSet executeQuery()
    {
        System.out.println("PostgreSQLStatement.executeQuery");
        m_connection.connect();
        m_connection.send(m_sqlCmd);

        ResultSet result = new ResultSet();

        //...
        return result;
    }

    @Override
    public void close() throws IOException
    {
        System.out.println("PostgreSQLStatement.close");
    }
}
