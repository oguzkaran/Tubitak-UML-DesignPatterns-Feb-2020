#pragma once
#include "IOperationStrategy.h"

class AddOperationStrategy : public IOperationStrategy {
public:
	int DoOperation(int a, int b) const override;
	//...
};

