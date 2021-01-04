package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        IntValueMultiplyAdapter intValueMultiplyAdapter = new IntValueMultiplyAdapter(10, 4);

        System.out.println(intValueMultiplyAdapter.getValue());
    }
}
