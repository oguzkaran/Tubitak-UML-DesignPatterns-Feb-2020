package org.csystem.app;

public interface IComputerVisitor {
    void visit(Mouse mouse);
    void visit(Keyboard keyboard);
    void visit(Computer keyboard);
}
