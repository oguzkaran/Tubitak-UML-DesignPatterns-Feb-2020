#pragma once

#include <map>
#include <memory>

template <typename T, T min, T max>
class Value {
public:
	Value(T val = T()) : m_val{ val } {}
	T GetVal() { return m_val; }
	static std::shared_ptr<Value<T, min, max>> ValueOf(T val);
private:
	static std::map<int, std::shared_ptr<Value<T, min, max>>> m_cache;
	const T m_val;
};

template <typename T, T min, T max>
std::shared_ptr<Value<T, min, max>> Value<T, min, max>::ValueOf(T val)
{
	//TODO:
	return std::make_shared<Value<T, min, max>>();
}

