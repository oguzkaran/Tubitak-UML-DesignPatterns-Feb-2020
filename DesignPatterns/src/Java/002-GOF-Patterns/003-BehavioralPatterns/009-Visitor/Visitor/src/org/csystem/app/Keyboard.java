package org.csystem.app;

public class Keyboard implements IComputerPart {
    //...
    @Override
    public void accept(IComputerVisitor visitor)
    {
        visitor.visit(this);
    }
}