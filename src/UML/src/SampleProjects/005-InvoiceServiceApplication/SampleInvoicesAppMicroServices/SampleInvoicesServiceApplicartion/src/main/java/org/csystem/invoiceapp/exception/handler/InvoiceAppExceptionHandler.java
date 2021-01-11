package org.csystem.invoiceapp.exception.handler;

import org.csystem.util.service.ServiceException;
import org.springframework.beans.TypeMismatchException;
import org.springframework.core.Ordered;
import org.springframework.core.annotation.Order;
import org.springframework.http.HttpHeaders;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.ControllerAdvice;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.context.request.WebRequest;
import org.springframework.web.servlet.mvc.method.annotation.ResponseEntityExceptionHandler;

@Order(Ordered.HIGHEST_PRECEDENCE)
@ControllerAdvice
public class InvoiceAppExceptionHandler extends ResponseEntityExceptionHandler {
    @Override
    protected ResponseEntity<Object> handleTypeMismatch(TypeMismatchException ex, HttpHeaders headers, HttpStatus status, WebRequest request)
    {
        var apiError = new InvoicesAppApiError(HttpStatus.BAD_REQUEST, "Bozuk JSON formatı", ex.getMessage(), ex.getValue());

        return new ResponseEntity<>(apiError, apiError.getHttpStatus());
    }

    //Sadece örnek bu uygulamada buraya akış zaten gelemez
    /*
    @ExceptionHandler(ServiceException.class)
    public ResponseEntity<Object> handleServiceException(ServiceException ex)
    {

        //....
    }
    */

}
