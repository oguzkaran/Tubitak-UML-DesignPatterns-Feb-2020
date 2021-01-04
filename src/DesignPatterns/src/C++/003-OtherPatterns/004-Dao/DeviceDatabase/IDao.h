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
