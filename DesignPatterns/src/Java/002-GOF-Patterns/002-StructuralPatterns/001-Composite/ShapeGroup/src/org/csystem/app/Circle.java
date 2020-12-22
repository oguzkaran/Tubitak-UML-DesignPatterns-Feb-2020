package org.csystem.app;

public class Circle extends Shape {
    public Circle(Color color)
    {
        super(color);
    }

    @Override
    public void fillWithColor()
    {
        System.out.println("Circle.fillWithColor");

    }

    @Override
    public void draw()
    {
        System.out.println("Circle.draw");

    }
}
