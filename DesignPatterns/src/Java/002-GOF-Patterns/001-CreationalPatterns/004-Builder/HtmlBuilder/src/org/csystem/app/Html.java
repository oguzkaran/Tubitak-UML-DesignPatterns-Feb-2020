package org.csystem.app;

import java.util.HashMap;

public class Html {
    private String m_tagName;
    private String m_value;
    private final HashMap<String, String> m_attributes = new HashMap<>();

    private Html() {}

    public static class Builder {
        private final Html m_html = new Html();

        public void setTag(String tagName)
        {
            //...
            m_html.m_tagName = tagName;
        }

        public void setValue(String value)
        {
            //...
            m_html.m_value = value;
        }

        public void addAttribute(String name, String value)
        {
            //...
            m_html.m_attributes.put(name, value);
        }
        public Html build()
        {
            return m_html;
        }
    }

    public String getTagName()
    {
        return m_tagName;
    }


    public String getValue()
    {
        return m_value;
    }

    @Override
    public String toString()
    {
        String str = "<";

        str += m_tagName;

        if (!m_attributes.isEmpty()) {
            for (String key : m_attributes.keySet())
                str += key + "=\"" + m_attributes.get(key) + "\" ";
        }
        else if (m_value.isEmpty()){
            str += "/>";
        }
        else
            str += ">";

        return str;
    }
}
