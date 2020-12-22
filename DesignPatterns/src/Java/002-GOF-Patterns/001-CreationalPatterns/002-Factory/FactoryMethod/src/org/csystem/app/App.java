package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Point p = Point.createFromPolar(100, 100);

        System.out.println(p);

        Point p2 = Point.createFromCartesian(100, 100);

        System.out.println(p2);
    }
}
