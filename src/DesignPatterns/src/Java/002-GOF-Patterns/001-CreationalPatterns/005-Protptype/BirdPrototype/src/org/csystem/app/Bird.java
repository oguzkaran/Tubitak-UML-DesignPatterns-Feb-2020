package org.csystem.app;

import java.io.Serializable;

public abstract class Bird implements Cloneable, Serializable {
    protected Color color;
    protected BirdType birdType;

    public Bird(Color color, BirdType birdType)
    {
        this.color = color;
        this.birdType = birdType;
    }

    public Color getColor()
    {
        return color;
    }

    public void setColor(Color color)
    {
        this.color = color;
    }

    public BirdType getBirdType()
    {
        return birdType;
    }

    public void setBirdType(BirdType birdType)
    {
        this.birdType = birdType;
    }

    public abstract void fly();
    public abstract Object clone();
}
