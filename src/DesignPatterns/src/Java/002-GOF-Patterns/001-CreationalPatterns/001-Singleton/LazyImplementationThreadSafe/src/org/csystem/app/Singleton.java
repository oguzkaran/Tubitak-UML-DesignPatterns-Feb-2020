package org.csystem.app;

public class Singleton { //lazy implementation, thread safe
    //...
    private static Singleton ms_instance;
    //private static Object ms_syncObject = new Object();

    private Singleton() {}

    public static Singleton getInstance()
    {
        synchronized (Singleton.class) {
            if (ms_instance == null)
                ms_instance = new Singleton();
        }

        return ms_instance;
    }
    //...
}
