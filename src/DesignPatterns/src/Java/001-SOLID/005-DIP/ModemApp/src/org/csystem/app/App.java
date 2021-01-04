package org.csystem.app;

import org.csystem.app.modemapp.Modem;
import org.csystem.app.modemapp.MyConnection;
import org.csystem.app.modemapp.MyTransmission;

public class App {
    public static void main(String[] args)
    {
        MyConnection connection = new MyConnection();
        MyTransmission transmission = new MyTransmission();
        Modem modem = new Modem(connection, transmission);

        modem.sendMessage("merhaba");
        System.out.println(modem.receiveMessage());
    }
}
