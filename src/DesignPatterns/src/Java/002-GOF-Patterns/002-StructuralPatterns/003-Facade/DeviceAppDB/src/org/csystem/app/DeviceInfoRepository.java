package org.csystem.app;

public class DeviceInfoRepository implements IDeviceInfoRepository {
    @Override
    public <S extends DeviceInfo> S save(S s)
    {
        System.out.println("DeviceInfoRepositpry.save");
        return null;
    }

    @Override
    public Iterable<DeviceInfo> findAll()
    {
        System.out.println("DeviceInfoRepositpry.findAll");
        return null;
    }

    @Override
    public void deleteById(Long aLong)
    {
        System.out.println("DeviceInfoRepositpry.deleteById");
    }
}
