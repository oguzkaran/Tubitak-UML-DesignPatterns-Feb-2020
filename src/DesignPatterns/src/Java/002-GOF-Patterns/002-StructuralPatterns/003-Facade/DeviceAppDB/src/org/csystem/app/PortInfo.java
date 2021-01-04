package org.csystem.app;

public class PortInfo {
    private long m_id;
    private int m_num;

    public PortInfo(long id, int num)
    {
        m_id = id;
        m_num = num;
    }

    public long getId()
    {
        return m_id;
    }

    public void setId(long id)
    {
        m_id = id;
    }

    public int getNum()
    {
        return m_num;
    }

    public void setNum(int num)
    {
        m_num = num;
    }
}
