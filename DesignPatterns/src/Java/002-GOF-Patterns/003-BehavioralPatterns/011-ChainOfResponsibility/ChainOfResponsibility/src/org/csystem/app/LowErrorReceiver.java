package org.csystem.app;

public class LowErrorReceiver implements IReceiver {
    private final IReceiver m_receiver;

    public LowErrorReceiver(IReceiver receiver)
    {
        m_receiver = receiver;
    }

    @Override
    public boolean makeLog(LogInfo logInfo)
    {
        boolean status = true;

        if (!logInfo.getMessage().contains("low")) {
            if (m_receiver != null)
                m_receiver.makeLog(logInfo);
            status = false;
        }
        else
            System.out.println("Low log");

        return status;
    }
}
