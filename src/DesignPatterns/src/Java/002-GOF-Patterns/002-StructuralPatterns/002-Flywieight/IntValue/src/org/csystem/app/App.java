package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        IntValue ia = IntValue.valueOf(200);
        IntValue ib = IntValue.valueOf(200);

        System.out.println(ia == ib);
    }
}
