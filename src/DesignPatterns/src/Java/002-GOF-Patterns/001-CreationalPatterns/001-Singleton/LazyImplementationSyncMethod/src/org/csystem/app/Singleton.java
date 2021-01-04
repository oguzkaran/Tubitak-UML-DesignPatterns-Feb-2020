package org.csystem.app;

public class Singleton { //lazy implementation, thread safe
    //...
    private static Singleton ms_instance;


    private Singleton() {}

    public synchronized static Singleton getInstance()
    {
        if (ms_instance == null)
            ms_instance = new Singleton();

        return ms_instance;
    }
    //...
}
