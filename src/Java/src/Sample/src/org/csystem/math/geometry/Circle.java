package org.csystem.math.geometry;

public class Circle {
    private double m_r;

    public Circle()
    {}

    public Circle(double r)
    {
       setR(r);
    }

    public double getR() {return m_r;}

    public double getArea() {return Math.PI * m_r * m_r;}
    public double getCircumference() {return 2 * Math.PI * m_r;}

    public void setR(double r)
    {
        m_r = Math.abs(r);
    }
}
