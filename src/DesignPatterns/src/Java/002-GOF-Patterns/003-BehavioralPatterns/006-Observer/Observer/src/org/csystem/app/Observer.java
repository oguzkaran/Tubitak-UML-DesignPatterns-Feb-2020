package org.csystem.app;

public interface Observer<T> {
    void update(T oldVal, T newVal);
}
