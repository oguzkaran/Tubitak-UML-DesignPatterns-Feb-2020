package org.csystem.app;

import org.csystem.util.IntRange;

public class App {
    public static void main(String[] args)
    {
        var range = new IntRange(10, 20);

        for (var val : range)
            System.out.printf("%d ", val);

        System.out.println();
    }
}
