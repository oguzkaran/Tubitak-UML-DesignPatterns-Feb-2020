#include "IntOperationContext.h"

int IntOperationContext::execute()
{
	return m_strategy->DoOperation(m_a, m_b);
}


void IntOperationContext::SetStrategy(IOperationStrategy<int> &strategy)
{
    //...
    m_strategy = &strategy;
}