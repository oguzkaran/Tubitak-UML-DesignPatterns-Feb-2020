package org.csystem.app;

public class Singleton { //eager implementation, thread safe
    //...
    public static final Singleton INSTANCE = new Singleton();

    private Singleton()
    {}
    //...
}
