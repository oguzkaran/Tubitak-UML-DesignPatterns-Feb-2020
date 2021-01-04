package org.csystem.application.jnaapp.jna;

import com.sun.jna.Library;

public interface IOperation extends Library {
    int add(int a, int b);
    int multiply(int a, int b);
}
