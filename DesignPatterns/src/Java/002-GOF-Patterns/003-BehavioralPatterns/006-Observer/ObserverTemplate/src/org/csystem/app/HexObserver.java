package org.csystem.app;

public class HexObserver implements IObserver<IntValue> {
    //...
    @Override
    public void update(IntValue oldVal, IntValue newVal)
    {
        System.out.printf("Old Value:%X%n", oldVal.getValue());
        System.out.printf("New Value:%X%n", newVal.getValue());
    }
}
