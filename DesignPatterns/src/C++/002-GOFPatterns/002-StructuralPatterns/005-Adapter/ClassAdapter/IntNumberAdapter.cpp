#include "IntNumberAdapter.h"

std::ostream &operator <<(std::ostream &os, const IntNumberAdapter &n)
{
	os << n.GetVal();

	return os;
}



