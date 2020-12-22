package org.csystem.app;

public class Rectangle extends Shape {
    //...
    public Rectangle(Color color)
    {
        super(color);
    }

    @Override
    public void fillWithColor()
    {
        System.out.println("Rectangle.fillWithColor");

    }

    @Override
    public void draw()
    {
        System.out.println("Rectangle.draw");
    }
}
