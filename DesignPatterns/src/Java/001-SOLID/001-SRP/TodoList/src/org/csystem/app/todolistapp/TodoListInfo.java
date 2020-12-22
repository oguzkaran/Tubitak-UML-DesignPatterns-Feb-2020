package org.csystem.app.todolistapp;

import java.io.Serializable;
import java.util.ArrayList;

public class TodoListInfo implements Serializable {
    private String m_title;
    private final ArrayList<String> m_items;

    public TodoListInfo(String title)
    {
        //...
        m_title = title;
        m_items = new ArrayList<>();
    }

    public boolean add(String s)
    {
        return m_items.add(s);
    }

    public String getTitle()
    {
        return m_title;
    }

    public void setTitle(String title)
    {
        m_title = title;
    }

    public String get(int index)
    {
        return m_items.get(index);
    }

    public int itemsSize() {return m_items.size();}

    @Override
    public String toString()
    {
        return super.toString();
    }
}
