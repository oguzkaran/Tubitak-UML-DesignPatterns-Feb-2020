package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        AbstractGame abstractGame = new CarRaceGame();

        abstractGame.run();
    }
}
