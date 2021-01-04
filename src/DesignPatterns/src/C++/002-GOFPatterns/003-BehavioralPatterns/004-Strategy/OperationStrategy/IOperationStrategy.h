#pragma once

struct IOperationStrategy {
	[[nodiscard]] virtual int DoOperation(int a, int b) const = 0;
	virtual ~IOperationStrategy() = default;
};
