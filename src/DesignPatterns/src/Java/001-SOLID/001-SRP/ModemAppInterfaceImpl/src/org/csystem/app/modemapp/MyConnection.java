package org.csystem.app.modemapp;

public class MyConnection implements IConnection {
    @Override
    public boolean connect()
    {
        System.out.println("MyConnection.connect");
        return true;
    }

    @Override
    public boolean disconnect()
    {
        System.out.println("MyConnection.connect");

        return true;
    }
}
