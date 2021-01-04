package org.csystem.app;

public interface ICrudRepository<T, ID> {
    <S extends T> S save(S s);
    Iterable<T> findAll();
    void deleteById(ID id);
}
