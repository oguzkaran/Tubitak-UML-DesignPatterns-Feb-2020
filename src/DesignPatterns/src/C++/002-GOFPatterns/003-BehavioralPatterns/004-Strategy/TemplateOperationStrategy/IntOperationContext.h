#pragma once
#include "IOperationStrategy.h"

class IntOperationContext {
public:
	IntOperationContext(int a, int b, IOperationStrategy<int> &strategy)
		: m_a{ a }, m_b{ b }, m_strategy{ &strategy } {}
public:
	int execute();
public:
	void SetStrategy(IOperationStrategy<int> &strategy);
	//...
private:
	int m_a, m_b;
	IOperationStrategy<int> *m_strategy;
};

