package org.csystem.app;

public class OctalObserver implements Observer<IntValue> {
    @Override
    public void update(IntValue oldVal, IntValue newVal)
    {
        System.out.printf("Old Value:%o%n", oldVal.getValue());
        System.out.printf("New Value:%o%n", newVal.getValue());
    }
}
