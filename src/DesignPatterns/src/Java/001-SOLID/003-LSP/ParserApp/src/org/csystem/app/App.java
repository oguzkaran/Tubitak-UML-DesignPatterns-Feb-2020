package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        FileSource fs = new FileSource("text.txt");
        Parser p = new Parser(fs);

        p.doParse();

        CharArraySource charArraySource = new CharArraySource("Bugün hava yağmurlu");

        p.setSource(charArraySource);

        p.doParse();
    }
}
