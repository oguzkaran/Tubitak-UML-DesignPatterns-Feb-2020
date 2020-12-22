#pragma once
#include <iostream>

template <typename T>
struct Property {
	template <typename K>
	friend std::ostream &operator <<(std::ostream &os, const Property<K> &p);
	
	Property(const T &val = T())
	{
		*this = val;
	}

	operator T() 
	{
		return m_value;
	}

	T &operator =(const T &val)
	{
		m_value = val;

		return m_value;
	}

private:
	T m_value;
};

template <typename K>
std::ostream &operator <<(std::ostream &os, const Property<K> &p)
{
	os << p.m_value;

	return os;
}