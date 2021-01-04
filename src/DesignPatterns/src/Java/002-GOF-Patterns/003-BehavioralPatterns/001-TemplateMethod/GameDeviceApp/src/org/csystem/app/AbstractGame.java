package org.csystem.app;

public abstract class AbstractGame implements IGame {
    //...
    public final void run()
    {
        //...
        start();
        play();
        //...
        pause();
        stop();
    }
}
