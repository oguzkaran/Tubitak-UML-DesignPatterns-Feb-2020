package org.csystem.app;

public class Mouse implements IComputerPart {
    //...
    @Override
    public void accept(IComputerVisitor visitor)
    {
        visitor.visit(this);
    }
}
