package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        BirdFactory bf = new BirdFactory();
        Bird [] birds = new Bird[3];

        birds[0] = bf.createBird(BirdType.NORMAL);
        birds[1] = bf.createBird(BirdType.SPLITTED);
        birds[2] = bf.createBird(BirdType.ACCELERATED);

        for (var bird : birds)
            bird.fly();
    }
}
