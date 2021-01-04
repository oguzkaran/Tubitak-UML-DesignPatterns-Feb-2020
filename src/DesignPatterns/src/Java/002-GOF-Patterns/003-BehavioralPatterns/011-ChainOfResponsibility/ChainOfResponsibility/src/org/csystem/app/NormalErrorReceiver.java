package org.csystem.app;

public class NormalErrorReceiver implements IReceiver {
    private final IReceiver m_receiver;

    public NormalErrorReceiver(IReceiver receiver)
    {
        m_receiver = receiver;
    }

    @Override
    public boolean makeLog(LogInfo logInfo)
    {
        System.out.println("Normal log");
        if (m_receiver != null)
            return m_receiver.makeLog(logInfo);

        return false;
    }
}
