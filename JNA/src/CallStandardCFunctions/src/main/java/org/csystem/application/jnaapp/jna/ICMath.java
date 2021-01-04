package org.csystem.application.jnaapp.jna;

import com.sun.jna.Library;

public interface ICMath extends Library {
    double sqrt(double a);
    double pow(double a, double b);
}
