package org.csystem.app;

import java.util.HashMap;

public class BirdFactory {
    private final HashMap<BirdType, Bird> m_birds = new HashMap<>();

    private void loadBirds()
    {
        m_birds.put(BirdType.ACCELERATED, new AcceleratedBird(/*...*/));
        m_birds.put(BirdType.NORMAL, new NormalBird(/*...*/));
        m_birds.put(BirdType.SPLITTED, new SplittedBird(/*...*/));
    }

    public BirdFactory()
    {
        loadBirds();
    }

    public Bird createBird(BirdType birdType)
    {
        return (Bird)m_birds.get(birdType).clone();
    }

}
