package org.csystem.app;

import java.util.ArrayList;
import java.util.List;

public class ShapeGroup implements IShape {
    private List<IShape> m_shapes = new ArrayList<>();

    public ShapeGroup addShape(IShape shape)
    {
        m_shapes.add(shape);

        return this;
    }

    public IShape getShape(int index)
    {
        return m_shapes.get(index);
    }

    public int size()
    {
        return m_shapes.size();
    }

    @Override
    public void draw()
    {
        System.out.println("Shapegroup.draw");
        for (var shape : m_shapes)
            shape.draw();
    }
}
