#pragma once
#include "IOperationStrategy.h"

class AddWithValueOperationStrategy : public IOperationStrategy {
public:
	explicit AddWithValueOperationStrategy(int val = 0) : m_val{ val } {}
public:
	int DoOperation(int a, int b) const override;
private:
	int m_val;
};

