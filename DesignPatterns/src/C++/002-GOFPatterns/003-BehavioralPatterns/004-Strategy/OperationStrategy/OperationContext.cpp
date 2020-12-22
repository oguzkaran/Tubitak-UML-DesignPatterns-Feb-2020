#include "OperationContext.h"

int OperationContext::execute()
{
    //...
	return m_strategy->DoOperation(m_a, m_b);
}


void OperationContext::SetStrategy(const IOperationStrategy &strategy)
{
    //...
    m_strategy = &strategy;
}
