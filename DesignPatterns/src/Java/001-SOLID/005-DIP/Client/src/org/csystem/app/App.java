package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Client client = new Client("192.168.1.167", 50500);

        client.run();
    }
}
