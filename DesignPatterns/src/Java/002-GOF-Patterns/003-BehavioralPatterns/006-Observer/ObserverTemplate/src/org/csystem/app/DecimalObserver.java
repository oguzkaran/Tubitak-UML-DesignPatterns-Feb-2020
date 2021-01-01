package org.csystem.app;

public class DecimalObserver implements IObserver<IntValue> {
    @Override
    public void update(IntValue oldVal, IntValue newVal)
    {
        System.out.printf("Old Value:%d%n", oldVal.getValue());
        System.out.printf("New Value:%d%n", newVal.getValue());
    }
}
