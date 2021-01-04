package org.csystem.application.jnaapp.jna;

import com.sun.jna.Library;

public interface ISample extends Library {
    Sample create_sample(int x, int y, String s);
    void display_sample(Sample s);
    void destroy_sample(Sample s);
}
