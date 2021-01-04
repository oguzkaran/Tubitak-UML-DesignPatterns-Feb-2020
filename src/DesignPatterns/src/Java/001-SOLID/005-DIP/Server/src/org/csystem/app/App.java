package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Server server = new Server(50500);

        server.run();
    }
}
