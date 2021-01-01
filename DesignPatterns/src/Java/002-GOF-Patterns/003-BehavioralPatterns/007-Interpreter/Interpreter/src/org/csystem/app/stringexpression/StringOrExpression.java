package org.csystem.app.stringexpression;

import org.csystem.app.expression.IExpression;
import org.csystem.app.expression.OrExpression;

import java.util.Collection;

public class StringOrExpression extends OrExpression<String> {
    public StringOrExpression(Collection <? extends IExpression<String>> expressions)
    {
        super(expressions);
    }
    //...
}
