#pragma once
#include "IOperationStrategy.h"

class IntAddOperationStrategy : public IOperationStrategy<int> {
public:
	int DoOperation(const int &a, const int &b) override;
};

