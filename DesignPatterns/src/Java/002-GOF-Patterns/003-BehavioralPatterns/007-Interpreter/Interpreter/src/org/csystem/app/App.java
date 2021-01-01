package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        var marriedExpression = ExpressionHelper.getMarriedExpression("Ali", "Ayşe");
        var femaleExpression = ExpressionHelper.getFemaleExpression("Fatma", "Zeynep");

        String str = "Ali, Ayşe ile evli mi?";

        System.out.printf("%s%n", marriedExpression.interpret(str) ? "Evli" : "Evli değil");
        System.out.printf("%s%n", femaleExpression.interpret(str) ? "Veri tabanında var" : "Veri tabanında yok");

        str = "Ali ile Fatma aynı dersi alıyorlar";

        System.out.printf("%s%n", marriedExpression.interpret(str) ? "Evli" : "Evli değil");
        System.out.printf("%s%n", femaleExpression.interpret(str) ? "Veri tabanında var" : "Veri tabanında yok");

        str = "Ali ile Ayşe aynı dersi alıyorlar";

        System.out.printf("%s%n", marriedExpression.interpret(str) ? "Evli" : "Evli değil");
        System.out.printf("%s%n", femaleExpression.interpret(str) ? "Veri tabanında var" : "Veri tabanında yok");
    }
}
