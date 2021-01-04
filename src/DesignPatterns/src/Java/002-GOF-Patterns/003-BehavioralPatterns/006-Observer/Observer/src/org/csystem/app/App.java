package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        var intValue = new IntValue(100);

        intValue.attach(new HexObserver());
        intValue.attach(new OctalObserver());
        intValue.attach(new DecimalObserver());

        intValue.setValue(200);
    }
}
