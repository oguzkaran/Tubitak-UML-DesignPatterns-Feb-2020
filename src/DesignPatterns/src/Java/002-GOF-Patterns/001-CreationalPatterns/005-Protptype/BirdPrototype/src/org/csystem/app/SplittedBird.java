package org.csystem.app;

public class SplittedBird extends Bird {
    public SplittedBird()
    {
        super(new Color(0, 255, 0), BirdType.SPLITTED);
        //...
    }
    @Override
    public void fly()
    {
        System.out.println("Splitted Bird fly");
    }

    @Override
    public Object clone()
    {
        return new SplittedBird();
    }
}
