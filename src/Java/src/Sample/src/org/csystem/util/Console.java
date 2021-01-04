package org.csystem.util;

import java.util.Scanner;

public final class Console {
    private static final Scanner ms_kb;

    static {
        ms_kb = new Scanner(System.in);
    }
    private Console() {}

    public static class Error {
        private Error() {}
        public static void write(boolean b)
        {
            write("%b", b);
        }

        public static void write(int val)
        {
            write("%d", val);
        }

        public static void write(long val)
        {
            write("%d", val);
        }

        public static void write(char ch)
        {
            write("%c", ch);
        }

        public static void write(double val)
        {
            write("%f", val);
        }

        public static void write(float val)
        {
            write("%d", val);
        }

        public static void write(String s)
        {
            write("%s", s);
        }

        public static void write(char [] c)
        {
            for (char ch : c)
                write(ch);
        }

        public static void write(Object obj)
        {
            write("%s", obj);
        }

        public static void write(String fmt, Object...objects)
        {
            System.err.printf(fmt, objects);
        }

        public static void writeLine()
        {
            write("\n");
        }

        public static void writeLine(boolean b)
        {
            writeLine("%b", b);
        }

        public static void writeLine(int val)
        {
            writeLine("%d", val);
        }

        public static void writeLine(long val)
        {
            writeLine("%d", val);
        }

        public static void writeLine(char ch)
        {
            writeLine("%c", ch);
        }

        public static void writeLine(double val)
        {
            writeLine("%f", val);
        }

        public static void writeLine(float val)
        {
            writeLine("%d", val);
        }

        public static void writeLine(String s)
        {
            writeLine("%s", s);
        }

        public static void writeLine(char [] c)
        {
            for (char ch : c)
                writeLine(ch);
        }

        public static void writeLine(Object obj)
        {
            writeLine("%s", obj);
        }

        public static void writeLine(String fmt, Object...objects)
        {
            write(fmt + "\n", objects);
        }
    }
    public static double readDouble()
    {
        return readDouble("");
    }

    public static double readDouble(String msg)
    {
        return readDouble(msg, "");
    }

    public static double readDouble(String msg, String errMsg)
    {

        for (;;) {
            try {
                System.out.print(msg);

                return Double.parseDouble(ms_kb.nextLine());
            }
            catch (NumberFormatException ex) {
                System.out.print(errMsg);
            }
        }
    }

    public static double readDoubleLine(String msg)
    {
        return readDouble(msg + "\n", "");
    }

    public static double readDoubleLine(String msg, String errMsg)
    {
        return readDouble(msg + "\n", errMsg + "\n");
    }

    public static int readInt()
    {
        return readInt("");
    }

    public static int readInt(String msg)
    {
        return readInt(msg, "");
    }

    public static int readInt(String msg, String errMsg)
    {
    	for (;;) {
            try {
                System.out.print(msg);

                return Integer.parseInt(ms_kb.nextLine());
            }
            catch (NumberFormatException ex) {
                System.out.print(errMsg);
            }
        }
    }

    public static int readIntLine(String msg)
    {
        return readInt(msg + "\n", "");
    }

    public static int readIntLine(String msg, String errMsg)
    {
        return readInt(msg + "\n", errMsg + "\n");
    }

    public static long readLong()
    {
        return readLong("");
    }

    public static long readLong(String msg)
    {
        return readLong(msg, "");
    }

    public static long readLong(String msg, String errMsg)
    {
        for (;;) {
            try {
                System.out.print(msg);

                return Long.parseLong(ms_kb.nextLine());
            }
            catch (NumberFormatException ex) {
                System.out.print(errMsg);
            }
        }
    }

    public static long readLongLine(String msg)
    {
        return readLong(msg + "\n", "");
    }

    public static long readLongLine(String msg, String errMsg)
    {
        return readLong(msg + "\n", errMsg + "\n");
    }


    public static String read(String msg)
    {
        System.out.print(msg);

        return ms_kb.nextLine();
    }

    public static String readLine()
    {
        return read("");
    }

    public static String readLine(String msg)
    {
        return read(msg + "\n");
    }

    public static void write(boolean b)
    {
        write("%b", b);
    }

    public static void write(int val)
    {
        write("%d", val);
    }

    public static void write(long val)
    {
        write("%d", val);
    }

    public static void write(char ch)
    {
        write("%c", ch);
    }

    public static void write(double val)
    {
        write("%f", val);
    }

    public static void write(float val)
    {
        write("%d", val);
    }

    public static void write(String s)
    {
        write("%s", s);
    }

    public static void write(char [] c)
    {
        for (char ch : c)
            write(ch);
    }

    public static void write(Object obj)
    {
        write("%s", obj);
    }

    public static void write(String fmt, Object...objects)
    {
        System.out.printf(fmt, objects);
    }

    public static void writeLine()
    {
        write("\n");
    }

    public static void writeLine(boolean b)
    {
        writeLine("%b", b);
    }

    public static void writeLine(int val)
    {
        writeLine("%d", val);
    }

    public static void writeLine(long val)
    {
        writeLine("%d", val);
    }

    public static void writeLine(char ch)
    {
        writeLine("%c", ch);
    }

    public static void writeLine(double val)
    {
        writeLine("%f", val);
    }

    public static void writeLine(float val)
    {
        writeLine("%d", val);
    }

    public static void writeLine(String s)
    {
        writeLine("%s", s);
    }

    public static void writeLine(char [] c)
    {
        for (char ch : c)
            writeLine(ch);
    }

    public static void writeLine(Object obj)
    {
        writeLine("%s", obj);
    }

    public static void writeLine(String fmt, Object...objects)
    {
        write(fmt + "\n", objects);
    }
}
