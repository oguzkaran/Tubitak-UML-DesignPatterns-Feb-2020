package org.csystem.app;

public class BorderedEditText extends EditText implements IColoredControl, IBorderedControl {
    private int m_borderWidth;
    private Color m_color;

    public BorderedEditText(String text)
    {
        this(text, 0);
    }

    public BorderedEditText(String text, int borderWidth)
    {
        super(text);
        setBorderWidth(borderWidth);
    }

    public int getBorderWidth()
    {
        return m_borderWidth;
    }

    @Override
    public void setBorderWidth(int val)
    {
        m_borderWidth = val;
    }

    @Override
    public void setColor(int r, int g, int b)
    {
        m_color = new Color();

        m_color.r = (byte)r;
        m_color.g = (byte)g;
        m_color.b = (byte)b;
    }
}
