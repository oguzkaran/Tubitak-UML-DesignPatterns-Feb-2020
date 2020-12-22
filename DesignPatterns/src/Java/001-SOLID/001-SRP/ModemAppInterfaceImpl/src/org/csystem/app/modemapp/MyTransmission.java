package org.csystem.app.modemapp;

public class MyTransmission implements ITransmission {
    @Override
    public void send(String msg)
    {
        System.out.println("MyTransmission.send");
    }

    @Override
    public String receive()
    {
        System.out.println("MyTransmission.receive");

        return "test";
    }
}
