package org.csystem.app;

public class BorderedEditText extends EditText {
    private int m_borderWidth;

    public BorderedEditText(String text)
    {
        this(text, 0);
    }

    public BorderedEditText(String text, int borderWidth)
    {
        super(text);
        m_borderWidth = borderWidth;
    }

    public int getBorderWidth()
    {
        return m_borderWidth;
    }

    public void setBorderWidth(int borderWidth)
    {
        m_borderWidth = borderWidth;
    }
    //...
}
