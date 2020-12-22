#pragma once
#include "IOperationStrategy.h"

class IntAddWithValueOperationStrategy : public IOperationStrategy<int> {
public:
	IntAddWithValueOperationStrategy(int val = 0) : m_val{ val } {}
public:
	int DoOperation(const int &a, const int &b) override;
private:
	int m_val;
};

