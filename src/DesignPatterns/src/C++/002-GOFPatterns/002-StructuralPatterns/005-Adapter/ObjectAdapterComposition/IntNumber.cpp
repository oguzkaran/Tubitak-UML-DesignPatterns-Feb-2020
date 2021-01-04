#include "IntNumber.h"

std::ostream &operator <<(std::ostream &os, const IntNumber &n)
{
	os << n.m_val;

	return os;
}




