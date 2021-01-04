package org.csystem.app;

public class ComputerPartVisitor implements IComputerVisitor{
    @Override
    public void visit(Mouse mouse)
    {
        System.out.println("Mouse visit");
    }

    @Override
    public void visit(Keyboard keyboard)
    {
        System.out.println("Keyboard visit");
    }

    @Override
    public void visit(Computer keyboard)
    {
        System.out.println("Computer visit");
    }
}
