#pragma once
#include "IOperationStrategy.h"

class IntMulOperationStrategy : public IOperationStrategy<int> {
public:
	int DoOperation(const int &a, const int &b) override;
};

