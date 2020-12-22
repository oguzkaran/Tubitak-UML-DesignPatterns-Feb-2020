package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        StringEx stringEx = new StringEx("Bugün hava çok güzel");

        System.out.println(stringEx.toUpperCase());
        System.out.println(stringEx.reverse());
    }
}
