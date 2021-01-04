package org.csystem.app;

public class NormalBird extends Bird {
    public NormalBird()
    {
        super(new Color(0, 0, 255), BirdType.NORMAL);
        //...
    }

    @Override
    public void fly()
    {
        System.out.println("Normal Bird fly");
    }

    @Override
    public Object clone()
    {
        return new NormalBird();
    }
}
