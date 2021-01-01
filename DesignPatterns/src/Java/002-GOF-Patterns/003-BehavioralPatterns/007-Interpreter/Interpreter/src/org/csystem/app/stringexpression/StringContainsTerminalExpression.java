package org.csystem.app.stringexpression;

import org.csystem.app.expression.IExpression;

public class StringContainsTerminalExpression implements IExpression<String> {
    private final String m_data;

    public StringContainsTerminalExpression(String data)
    {
        m_data = data;
    }

    @Override
    public boolean interpret(String str)
    {
        return str.contains(m_data);
    }
}
