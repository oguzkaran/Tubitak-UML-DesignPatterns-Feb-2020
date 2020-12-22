#include "IntNumberEx.h"

void IntNumberEx::SetVal(int val)
{
	//...
	m_number.SetVal(val);
}

IntNumberEx::operator int() const
{
	return m_number.operator int();
}

IntNumberEx::operator short() const
{
	return static_cast<int>(m_number);
}