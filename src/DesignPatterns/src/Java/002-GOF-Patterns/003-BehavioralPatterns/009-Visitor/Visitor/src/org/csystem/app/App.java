package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Computer c = new Computer();

        c.add(new Mouse());
        c.add(new Keyboard());
        c.add(new Mouse());

        c.accept(new ComputerPartVisitor());
    }
}
