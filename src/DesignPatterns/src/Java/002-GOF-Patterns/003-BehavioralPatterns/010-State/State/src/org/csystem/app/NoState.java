package org.csystem.app;

public class NoState implements IState {
    @Override
    public void doAction(Context context)
    {
        System.out.printf("Current state:%s%n", context.getState());
        //..
        context.setState(this);
    }

    //...

    @Override
    public String toString()
    {
        return "No State";
    }
}
