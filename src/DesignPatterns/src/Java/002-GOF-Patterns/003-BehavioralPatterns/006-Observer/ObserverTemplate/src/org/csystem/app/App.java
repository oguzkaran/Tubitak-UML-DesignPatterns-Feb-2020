package org.csystem.app;

import java.util.ArrayList;
import java.util.Collection;

class App {
    public static void main(String[] args)
    {
        var intValue = new IntValue(100);

        var observers = new ArrayList<IObserver<IntValue>>();

        observers.add(new HexObserver());
        observers.add(new OctalObserver());
        observers.add(new DecimalObserver());

        Util.attach(observers, intValue);

        intValue.setValue(200);

        System.out.println("///////////////////");
        intValue.detach(1);

        intValue.setValue(100);
    }
}

class Util {
    public static <T extends Observable<T>> void attach(Collection<? extends IObserver<T>> observers, T t)
    {
        observers.forEach(t::attach);
    }
}
