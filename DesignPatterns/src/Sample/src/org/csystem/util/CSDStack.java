package org.csystem.util;

import java.util.ArrayList;
import java.util.EmptyStackException;

public class CSDStack<T> extends ArrayList<T> {
    public boolean empty()
    {
        return this.isEmpty();
    }

    public T peek()
    {
        if (size() == 0)
            throw  new EmptyStackException();

        return this.get(size() - 1);
    }

    public T pop()
    {
        if (size() == 0)
            throw  new EmptyStackException();

        return this.remove(size() - 1);
    }

    public void push(T elem)
    {
        this.add(elem);
    }


}
