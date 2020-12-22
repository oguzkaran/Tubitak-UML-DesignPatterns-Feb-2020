package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Point.Factory pf = new Point.Factory();
        Point p = pf.createFromCartesian(100, 100);
        Point p2 = pf.createFromPolar(100, 100);

        System.out.println(p);
        System.out.println(p2);

        System.out.printf("Count:%d%n", pf.getCount());
    }
}
