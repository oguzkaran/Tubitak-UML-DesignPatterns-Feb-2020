package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        IntValue intValue = IntValue.of(10);
        IntValueMultiplyAdapter intValueMultiplyAdapter = new IntValueMultiplyAdapter(intValue, 4);

        System.out.println(intValueMultiplyAdapter.getValue());
    }
}
