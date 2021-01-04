package org.csystem.app;

import java.util.ArrayList;
import java.util.List;

public abstract class Observable<T> {
    private final List<IObserver<T>> m_observers = new ArrayList<>();

    public void notifyDataChanged(T oldVal, T newVal)
    {
        m_observers.forEach(observer -> observer.update(oldVal, newVal));
    }

    public void attach(IObserver<T> observer)
    {
        m_observers.add(observer);
    }

    public void detach(IObserver<T> observer)
    {
        m_observers.remove(observer);
    }

    public void detach(int index)
    {
        m_observers.remove(index);
    }
}
