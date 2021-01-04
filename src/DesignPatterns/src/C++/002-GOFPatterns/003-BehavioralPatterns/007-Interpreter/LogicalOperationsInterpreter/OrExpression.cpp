#include "OrExpression.h"

bool OrExpression::Interpret(const std::string &text)
{
	return m_exp1->Interpret(text) || m_exp2->Interpret(text);
}