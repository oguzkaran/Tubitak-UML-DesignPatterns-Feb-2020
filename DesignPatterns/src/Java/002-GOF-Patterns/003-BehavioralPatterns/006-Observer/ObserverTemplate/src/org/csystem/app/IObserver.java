package org.csystem.app;

public interface IObserver<T> {
    void update(T oldVal, T newVal);
}
