#include "IntAddWithValueOperationStrategy .h"

int IntAddWithValueOperationStrategy::DoOperation(const int &a, const int &b)
{
	return a + b + m_val;
}