package org.csystem.app;

public class StartState implements IState {
    @Override
    public void doAction(Context context)
    {
        System.out.println("Start state action");
        System.out.printf("Current state:%s%n", context.getState());
        context.setState(this);
    }

    //...

    @Override
    public String toString()
    {
        return "Start State";
    }
}
