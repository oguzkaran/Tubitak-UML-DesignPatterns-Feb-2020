package org.csystem.application.jnaapp.jna;

import com.sun.jna.Library;

public interface ICString extends Library {
    String strcpy(String dest, String src);
}
