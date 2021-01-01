package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        var context = new Context();
        var startState = new StartState();
        var stopState = new StopState();

        startState.doAction(context);

        System.out.println(context.getState());

        stopState.doAction(context);

        System.out.println(context.getState());
    }
}
