#include <stdexcept>
#include "IntRange.h"

using namespace std;

IntRange::IntRange(int min, int max, int inc)
{
	if (min > max)
		throw out_of_range("min > max");

	if (inc <= 0)
		throw out_of_range("inc < 0");

	m_min = min;
	m_max = max;
	m_inc = inc <= 0 ? 1 : inc;
}

IntRange::iterator &IntRange::iterator::operator++()
{
	//...
	m_value += m_inc;

	return *this;
}

int IntRange::iterator::operator *() const
{
	return m_value;
}

bool IntRange::iterator::operator ==(const IntRange::iterator &r) const
{
	return m_value >= r.m_value;
}

bool IntRange::iterator::operator !=(const IntRange::iterator &r) const
{
	return !(*this == r);
}