package org.csystem.application.jnaapp.jna;

import com.sun.jna.Structure;

@Structure.FieldOrder({"x", "y", "s"})
public class Sample extends Structure {
    public int x;
    public int y;
    public String s;
}
