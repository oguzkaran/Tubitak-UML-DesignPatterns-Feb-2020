package org.csystem.app;

public interface IComputerPart {
    void accept(IComputerVisitor visitor);
}
