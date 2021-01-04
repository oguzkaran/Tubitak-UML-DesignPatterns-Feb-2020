package org.csystem.app;

public class PortInfoRepository implements IPortInfoRepository {
    @Override
    public <S extends PortInfo> S save(S s)
    {
        System.out.println("PortInfoRepository.save");
        return null;
    }

    @Override
    public Iterable<PortInfo> findAll()
    {
        System.out.println("PortInfoRepository.findAll");
        return null;
    }

    @Override
    public void deleteById(Long aLong)
    {
        System.out.println("PortInfoRepository.deleteById");
    }
}
