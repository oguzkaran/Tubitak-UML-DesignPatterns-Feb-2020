package org.csystem.app;

import org.csystem.app.modemapp.ITransmission;
import org.csystem.app.modemapp.MyModem;

public class App {
    public static void main(String[] args)
    {
        MyModem modem = new MyModem();

        TransMissionHelper helper = new TransMissionHelper();

        System.out.println(helper.transmit(modem, "Merhaba"));
    }
}

class TransMissionHelper {
    public String transmit(ITransmission transmission, String msg)
    {
        transmission.send(msg);

        return transmission.receive();
    }
}