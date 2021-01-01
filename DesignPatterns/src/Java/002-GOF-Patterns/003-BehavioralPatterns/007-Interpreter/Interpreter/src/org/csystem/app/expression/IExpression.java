package org.csystem.app.expression;

public interface IExpression<T> {
    boolean interpret(T context);
}
