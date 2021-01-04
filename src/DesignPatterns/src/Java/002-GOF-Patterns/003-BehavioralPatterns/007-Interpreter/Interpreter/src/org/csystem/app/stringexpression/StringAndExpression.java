package org.csystem.app.stringexpression;

import org.csystem.app.expression.AndExpression;
import org.csystem.app.expression.IExpression;

import java.util.Collection;

public class StringAndExpression extends AndExpression<String> {
    public StringAndExpression(Collection <? extends IExpression<String>> expressions)
    {
        super(expressions);
    }
    //...
}
