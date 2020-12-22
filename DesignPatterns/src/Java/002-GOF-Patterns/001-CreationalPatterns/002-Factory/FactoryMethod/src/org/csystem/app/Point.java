package org.csystem.app;

public class Point {
    private double m_x, m_y;

    private enum Coordinate {CARTESIAN, POLAR}

    private Point(double a, double b, Coordinate coordinate)
    {
        //...
        if (coordinate == Coordinate.CARTESIAN) {
            m_x = a;
            m_y = b;
        }
        else {
            m_x = a * Math.cos(Math.toRadians(b));
            m_y = a * Math.sin(Math.toRadians(b));
        }
    }

    public static Point createFromCartesian(double x, double y)
    {
        return new Point(x, y, Coordinate.CARTESIAN);
    }

    public static Point createFromPolar(double r, double theta)
    {
        return new Point(r, theta, Coordinate.POLAR);
    }

    public double getX()
    {
        return m_x;
    }

    public void setX(double x)
    {
        m_x = x;
    }

    public double getY()
    {
        return m_y;
    }

    public void setY(double y)
    {
        m_y = y;
    }

    @Override
    public String toString()
    {
        return String.format("(%f, %f)", m_x, m_y);
    }
}
