package org.csystem.app;

public class AcceleratedBird extends Bird {
    public AcceleratedBird()
    {
        super(new Color(255, 0, 0), BirdType.ACCELERATED);
        //...
    }

    @Override
    public void fly()
    {
        System.out.println("Accelerated Bird fly");
    }

    @Override
    public Object clone()
    {
        return new AcceleratedBird();
    }
}
