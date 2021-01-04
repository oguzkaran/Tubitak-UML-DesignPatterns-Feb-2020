#pragma once

#include "IOperationStrategy.h"

class NoStrategy : public IOperationStrategy {
    int DoOperation(int a, int b) const override;
};
