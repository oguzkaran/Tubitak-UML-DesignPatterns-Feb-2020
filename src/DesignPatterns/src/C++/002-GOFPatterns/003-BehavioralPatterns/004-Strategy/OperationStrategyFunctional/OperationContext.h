#pragma once

#include <functional>
#include <utility>

template <typename T>
using OpFunction = std::function<T(T, T)>;

using IntOpFunction = std::function<int(int, int)>;

class OperationContext {
public:
	OperationContext(int a, int b, IntOpFunction strategy)
		: m_a{ a }, m_b{ b }, m_strategy{std::move( strategy )} {}
public:
	int execute();
public:
	void SetStrategy(IntOpFunction strategy);
	//...
private:
	int m_a, m_b;
	IntOpFunction m_strategy;
};

