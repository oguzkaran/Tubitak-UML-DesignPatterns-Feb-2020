package org.csystem.app;

public class LogMaker {
    private final IReceiver m_receiver;

    public LogMaker(IReceiver receiver)
    {
        m_receiver = receiver;
    }

    public void doWork(LogInfo logInfo)
    {
        //...
        if (m_receiver != null)
            m_receiver.makeLog(logInfo);
    }
}
