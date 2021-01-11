package org.csystem.invoiceapp.exception.handler;

import com.fasterxml.jackson.annotation.JsonFormat;
import org.springframework.http.HttpStatus;

import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.List;

public class InvoicesAppApiError extends ApiError {
    private final HttpStatus m_httpStatus;
    private final LocalDateTime m_timestamp;
    private final String m_debugMessage;
    private final Object m_rejectedValue;
    private final List<ApiError> m_errorList;

    public InvoicesAppApiError(HttpStatus httpStatus, String message, String debugMessage, Object rejectedValue)
    {
        super(message);
        m_httpStatus = httpStatus;
        m_debugMessage = debugMessage;
        m_timestamp = LocalDateTime.now();
        m_rejectedValue = rejectedValue;
        m_errorList = new ArrayList<>();
    }

    public HttpStatus getHttpStatus()
    {
        return m_httpStatus;
    }

    @JsonFormat(shape = JsonFormat.Shape.STRING, pattern = "dd/MM/yyyy hh:mm:ss")
    public LocalDateTime getTimestamp()
    {
        return m_timestamp;
    }

    public String getDebugMessage()
    {
        return m_debugMessage;
    }

    public Object getRejectedValue()
    {
        return m_rejectedValue;
    }

    public List<ApiError> getErrorList()
    {
        return m_errorList;
    }

    public void addApiError(ApiError apiError)
    {
        m_errorList.add(apiError);
    }
}
