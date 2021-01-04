package org.csystem.app;

import org.csystem.app.expression.IExpression;
import org.csystem.app.stringexpression.StringAndExpression;
import org.csystem.app.stringexpression.StringContainsTerminalExpression;
import org.csystem.app.stringexpression.StringOrExpression;

import java.util.stream.Collectors;
import java.util.stream.Stream;

public final class ExpressionHelper {
    private ExpressionHelper()
    {
    }

    public static IExpression<String> getFemaleExpression(String...names)
    {
        return new StringOrExpression(Stream.of(names)
                .map(StringContainsTerminalExpression::new).collect(Collectors.toList()));
    }


    public static IExpression<String> getMarriedExpression(String name1, String name2)
    {
        return new StringAndExpression(Stream.of(name1, name2)
                .map(StringContainsTerminalExpression::new).collect(Collectors.toList()));
    }
}
