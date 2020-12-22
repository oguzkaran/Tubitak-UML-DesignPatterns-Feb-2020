#pragma once
#include <string>

struct IExpression {
	virtual bool Interpret(const std::string &text) = 0;
	virtual ~IExpression() = default;
};

