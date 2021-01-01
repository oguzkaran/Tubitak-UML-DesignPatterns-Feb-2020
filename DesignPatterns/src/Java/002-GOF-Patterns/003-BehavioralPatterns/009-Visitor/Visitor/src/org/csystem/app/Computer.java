package org.csystem.app;

import java.util.ArrayList;
import java.util.List;

public class Computer implements IComputerPart {
    private final List<IComputerPart> m_computerPartList = new ArrayList<>();

    //...

    public boolean add(IComputerPart iComputerPart)
    {
        //...
        return m_computerPartList.add(iComputerPart);
    }

    @Override
    public void accept(IComputerVisitor visitor)
    {
        m_computerPartList.forEach(cp -> cp.accept(visitor));
        visitor.visit(this);
    }
}
