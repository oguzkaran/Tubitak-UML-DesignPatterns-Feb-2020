#include "OperationContext.h"

int OperationContext::execute()
{
	return m_strategy(m_a, m_b);
}


void OperationContext::SetStrategy(IntOpFunction strategy)
{
    //...
    m_strategy = std::move(strategy);
}