package org.csystem.app;

public class DeviceAppHelper {
    private IPortInfoRepository m_portInfoRepository;
    private IDeviceInfoRepository m_deviceInfoRepository;

    public DeviceAppHelper(IPortInfoRepository portInfoRepository, IDeviceInfoRepository deviceInfoRepository)
    {
        m_portInfoRepository = portInfoRepository;
        m_deviceInfoRepository = deviceInfoRepository;
    }

    public DeviceInfo insertDeviceInfo(DeviceInfo deviceInfo)
    {
        return m_deviceInfoRepository.save(deviceInfo);
    }

    public PortInfo insertPortInfo(PortInfo portInfo)
    {
        return m_portInfoRepository.save(portInfo);
    }

    public Iterable<DeviceInfo> getAllDevices()
    {
        return m_deviceInfoRepository.findAll();
    }

    public Iterable<PortInfo> getAllPorts()
    {
        return m_portInfoRepository.findAll();
    }
}
