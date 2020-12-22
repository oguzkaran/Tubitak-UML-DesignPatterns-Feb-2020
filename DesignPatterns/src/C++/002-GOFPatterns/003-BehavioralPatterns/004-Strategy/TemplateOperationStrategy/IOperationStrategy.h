#pragma once

template <typename T>
struct IOperationStrategy {
	virtual T DoOperation(const T &t1, const T &t2) = 0;
	virtual ~IOperationStrategy() = default;
};
