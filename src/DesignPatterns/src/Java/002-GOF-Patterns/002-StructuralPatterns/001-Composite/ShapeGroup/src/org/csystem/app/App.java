package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Rectangle rectangle = new Rectangle(new Color(255, 89, 34));
        Triangle triangle = new Triangle(new Color(255, 89, 34));
        Line line = new Line();
        ShapeGroup group = new ShapeGroup();

        group.addShape(rectangle).addShape(line).addShape(triangle);

        group.draw();
    }
}
