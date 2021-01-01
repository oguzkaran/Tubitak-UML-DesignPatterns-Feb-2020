package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        var lowErrorReceiver = new LowErrorReceiver(null);
        var normalErrorReceiver = new NormalErrorReceiver(lowErrorReceiver);
        var fatalErrorReceiver = new FatalErrorReceiver(normalErrorReceiver);

        LogInfo normalErrorLogInfo = new LogInfo("This is a normal low priority error", LogPriority.LOW);
        LogInfo fatalErrorLogInfo = new LogInfo("This is a fatal error", LogPriority.HIGH);
        LogInfo errorLogInfo = new LogInfo("This is a low error", LogPriority.LOW);

        LogMaker logMaker = new LogMaker(fatalErrorReceiver);

        logMaker.doWork(normalErrorLogInfo);
        System.out.println("////////////////////");
        logMaker.doWork(fatalErrorLogInfo);
        System.out.println("////////////////////");
        logMaker.doWork(errorLogInfo);
    }
}
