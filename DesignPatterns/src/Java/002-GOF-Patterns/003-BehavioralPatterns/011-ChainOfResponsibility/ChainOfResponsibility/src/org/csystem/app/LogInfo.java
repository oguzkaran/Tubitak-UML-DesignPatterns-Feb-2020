package org.csystem.app;

public class LogInfo {
    private final String m_message;
    private final LogPriority m_priority;

    public LogInfo(String message, LogPriority priority)
    {
        m_message = message;
        m_priority = priority;
    }

    public String getMessage()
    {
        return m_message;
    }

    public LogPriority getPriority()
    {
        return m_priority;
    }
}
