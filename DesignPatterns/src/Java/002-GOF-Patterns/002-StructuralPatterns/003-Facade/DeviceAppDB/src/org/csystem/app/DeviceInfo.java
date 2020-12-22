package org.csystem.app;

import java.util.List;

public class DeviceInfo {
    private long m_id;
    private String m_name;
    private String m_host;
    private List<PortInfo> m_ports;

    public DeviceInfo(long id, String name, String host)
    {
        m_id = id;
        m_name = name;
        m_host = host;
    }

    public long getId()
    {
        return m_id;
    }

    public void setId(long id)
    {
        m_id = id;
    }

    public String getName()
    {
        return m_name;
    }

    public void setName(String name)
    {
        m_name = name;
    }

    public String getHost()
    {
        return m_host;
    }

    public void setHost(String host)
    {
        m_host = host;
    }

    public boolean add(PortInfo portInfo)
    {
        return m_ports.add(portInfo);
    }

    public int size()
    {
        return m_ports.size();
    }
}
