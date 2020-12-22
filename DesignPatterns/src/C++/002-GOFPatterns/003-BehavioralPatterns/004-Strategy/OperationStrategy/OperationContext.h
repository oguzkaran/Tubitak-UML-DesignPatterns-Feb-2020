#pragma once
#include "IOperationStrategy.h"
#include "NoStrategy.h"

class OperationContext {
public:
	OperationContext(int a, int b, const IOperationStrategy &strategy = NoStrategy{})
		: m_a{ a }, m_b{ b }, m_strategy{ &strategy } {}
public:
	int execute();
public:
	void SetStrategy(const IOperationStrategy &strategy);
	//...
private:
	int m_a, m_b;
	const IOperationStrategy *m_strategy;
};

