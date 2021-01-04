#pragma once
#include <iostream>
#include <exception>

template <typename T>
struct BoundProperty {
	template <typename K>
	friend std::ostream &operator <<(std::ostream &os, const BoundProperty<K> &p);
	
	BoundProperty(const T &val, const T &min, const T &max) : m_value{ val }, m_min{ min }, m_max{ max }
	{}

	operator T() 
	{
		return m_value;
	}

	T &operator =(const T &val)
	{
		if (val < m_min || m_max < val)
			throw std::out_of_range("out of range");

		m_value = val;

		return m_value;
	}

private:
	T m_value;
	T m_min, m_max;
};

template <typename K>
std::ostream &operator <<(std::ostream &os, const BoundProperty<K> &p)
{
	os << p.m_value;

	return os;
}