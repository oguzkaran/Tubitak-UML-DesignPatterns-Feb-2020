package org.csystem.app;

public abstract class Shape implements IShape {
    private Color m_color;

    public Shape(Color color)
    {
        m_color = color;
    }

    public Color getColor()
    {
        return m_color;
    }

    public void setColor(Color color)
    {
        m_color = color;
    }

    public abstract void fillWithColor();
}
