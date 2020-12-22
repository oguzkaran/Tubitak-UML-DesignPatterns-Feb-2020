#pragma once
#include "IExpression.h"

class TerminalExpression : public IExpression {
public: 
	TerminalExpression(const char *str) : m_str{ str } {}
public:
	bool Interpret(const std::string &text) override;
private:
	std::string m_str;
};

