#pragma once

#include <deque>

template <typename T, typename C = std::deque<T>>
struct IDao {
	virtual bool Insert(T &t) = 0;
	virtual C GetAll() = 0;
	virtual bool Update(T &t) = 0;
	virtual bool Delete(T &t) = 0;
	virtual ~IDao() = default;
};


/*
template <typename T, typename K, typename C = std::deque<T>>
struct IDao2 {
    virtual bool Insert(T &t) = 0;
    virtual std::optional<T> findById(K k) const;
    virtual std::optional<T> deleteById(K k);
    virtual C GetAll() = 0;
    virtual bool Update(T &t) = 0;
    virtual bool Delete(T &t) = 0;
    virtual ~IDao() = default;
};

 */