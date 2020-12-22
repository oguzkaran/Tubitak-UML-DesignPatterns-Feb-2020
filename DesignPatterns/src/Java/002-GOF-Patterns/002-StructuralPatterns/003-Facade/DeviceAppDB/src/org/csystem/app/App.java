package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        DeviceInfoRepository deviceInfoRepository = new DeviceInfoRepository();
        PortInfoRepository portInfoRepository = new PortInfoRepository();
        DeviceAppHelper helper = new DeviceAppHelper(portInfoRepository, deviceInfoRepository);

        helper.insertDeviceInfo(new DeviceInfo(0, "test", "192.168.2.234"));

        //...
    }
}
