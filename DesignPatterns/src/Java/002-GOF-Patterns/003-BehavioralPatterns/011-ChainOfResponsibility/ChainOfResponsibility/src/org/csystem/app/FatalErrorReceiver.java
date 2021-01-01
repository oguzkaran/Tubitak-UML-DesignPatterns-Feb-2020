package org.csystem.app;

public class FatalErrorReceiver implements IReceiver {
    private final IReceiver m_receiver;

    public FatalErrorReceiver(IReceiver receiver)
    {
        m_receiver = receiver;
    }

    @Override
    public boolean makeLog(LogInfo logInfo)
    {
        boolean status = true;

        if (!logInfo.getMessage().contains("fatal")) {
            if (m_receiver != null)
                m_receiver.makeLog(logInfo);
            status = false;
        }
        else
            System.out.println("Fatal log");

        return status;
    }
}
