package org.csystem.app.expression;

import java.util.Collection;

public class AndExpression<T> implements IExpression<T> {
    protected final Collection<? extends IExpression<T>> expressions;

    public AndExpression(Collection <? extends IExpression<T>> expressions)
    {
        this.expressions = expressions;
    }

    @Override
    public boolean interpret(T context)
    {
        boolean result = true;

        for (var expression : expressions)
            result = result && expression.interpret(context);

        return result;
    }
}
