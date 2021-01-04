package org.csystem.app;

public class Triangle extends Shape {
    //...
    public Triangle(Color color)
    {
        super(color);
    }

    @Override
    public void fillWithColor()
    {
        System.out.println("Triangle.fillWithColor");

    }

    @Override
    public void draw()
    {
        System.out.println("Triangle.draw");
    }
}
