package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Singleton s = new Singleton();

        s.setId(10);

        System.out.println(s.getId());
        Singleton k = new Singleton();

        k.setId(20);

        System.out.println(s.getId());

        System.out.println(s == k);
    }
}
