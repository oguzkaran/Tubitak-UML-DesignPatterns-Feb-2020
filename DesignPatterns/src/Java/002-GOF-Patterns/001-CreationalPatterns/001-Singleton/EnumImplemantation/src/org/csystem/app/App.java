package org.csystem.app;

import java.lang.reflect.Constructor;

public class App {
    public static void main(String[] args)
    {
        Singleton s1 = Singleton.INSTANCE;
        Singleton s2 = Singleton.INSTANCE;

        System.out.println(s1 == s2);

        try {
            Class<Singleton> clsSingleton = Singleton.class;

            Constructor<Singleton> ctor = clsSingleton.getDeclaredConstructor();

            ctor.setAccessible(true);
            Singleton k = (Singleton)ctor.newInstance();
            ctor.setAccessible(false);

            System.out.println(k == s1);
        }
        catch (Throwable ex) {
            ex.printStackTrace();
        }


    }
}
