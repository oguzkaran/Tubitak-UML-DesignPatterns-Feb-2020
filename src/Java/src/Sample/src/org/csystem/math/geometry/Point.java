package org.csystem.math.geometry;

public class Point {
    public int x, y;

    public Point() {}

    public Point(int x, int y)
    {
        this.x = x;
        this.y = y;
    }

    public void offset(int dxy)
    {
        offset(dxy, dxy);
    }

    public void offset(int dx, int dy)
    {
        x += dx;
        y += dy;
    }
}
