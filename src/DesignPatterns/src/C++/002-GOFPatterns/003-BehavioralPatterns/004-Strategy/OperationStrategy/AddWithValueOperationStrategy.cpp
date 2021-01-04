#include "AddWithValueOperationStrategy.h"

int AddWithValueOperationStrategy::DoOperation(int a, int b) const
{
	return a + b + m_val;
}