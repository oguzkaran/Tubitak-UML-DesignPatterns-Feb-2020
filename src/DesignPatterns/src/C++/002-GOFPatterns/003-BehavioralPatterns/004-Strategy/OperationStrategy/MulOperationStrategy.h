#pragma once
#include "IOperationStrategy.h"

class MulOperationStrategy : public IOperationStrategy {
public:
	int DoOperation(int a, int b) const override;
	//...
};

