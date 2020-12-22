package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        CompactDevice compactDevice = new CompactDevice();
        Printer printer = new Printer();
        DeviceOperation deviceOperation = new DeviceOperation();

        deviceOperation.doPrint(printer);
        deviceOperation.doScan(compactDevice);
        deviceOperation.doPrint(compactDevice);
    }
}

class DeviceOperation {
    //...
    public void doScan(IScan scan)
    {
        //...
        scan.scan();
    }

    public void doPrint(IPrint print)
    {
        //...
        print.print();
    }
}