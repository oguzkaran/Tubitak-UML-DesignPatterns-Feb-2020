#pragma once

#include <deque>

template <typename K, typename V, typename C = std::deque<V>>
struct IDaoTemplate {
	virtual K Insert(V &v) = 0;
	virtual C GetAll() = 0;
	virtual bool Update(V &v) = 0;
	virtual bool Delete(V &v) = 0;
	virtual ~IDaoTamplate() = default;
};
