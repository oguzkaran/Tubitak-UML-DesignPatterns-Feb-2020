package org.csystem.operation;

import org.csystem.util.IIntOperation;

public class AddOperation implements IIntOperation {
    @Override
    public int apply(int a, int b)
    {
        return a + b;
    }
}
