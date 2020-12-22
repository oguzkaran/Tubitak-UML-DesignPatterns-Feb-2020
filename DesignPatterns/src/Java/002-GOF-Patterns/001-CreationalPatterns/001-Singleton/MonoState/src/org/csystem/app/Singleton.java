package org.csystem.app;

public class Singleton { //eager implementation, thread safe
    //...
    private static int ms_id;
    private static String ms_name;

    public int getId()
    {
        return ms_id;
    }

    public void setId(int id)
    {
        ms_id = id;
    }

    public String getName()
    {
        return ms_name;
    }

    public void setName(String name)
    {
        ms_name = name;
    }
}
