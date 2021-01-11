package org.csystem.invoiceapp.exception.handler;

public abstract class ApiError {
    private final String m_message;

    public ApiError(String message)
    {
        m_message = message;
    }

    public String getMessage()
    {
        return m_message;
    }
}
