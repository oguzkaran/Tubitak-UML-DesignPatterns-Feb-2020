package org.csystem.app;

public class StopState implements IState {
    @Override
    public void doAction(Context context)
    {
        System.out.println("Stop state action");
        System.out.printf("Current state:%s%n", context.getState());
        //...
        context.setState(this);
    }

    //...

    @Override
    public String toString()
    {
        return "Stop State";
    }
}
