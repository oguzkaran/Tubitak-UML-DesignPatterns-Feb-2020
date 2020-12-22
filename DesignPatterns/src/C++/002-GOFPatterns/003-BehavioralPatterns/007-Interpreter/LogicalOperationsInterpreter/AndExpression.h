#pragma once
#include "IExpression.h"

class AndExpression : public IExpression {
public:
	AndExpression(IExpression *exp1, IExpression *exp2) 
		: m_exp1{ exp1 }, m_exp2{ exp2 } {}
public:
	bool Interpret(const std::string &text) override;
private:
	IExpression *m_exp1, *m_exp2;
};

