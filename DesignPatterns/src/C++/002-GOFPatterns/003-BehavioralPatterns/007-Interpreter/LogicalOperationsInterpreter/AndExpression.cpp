#include "AndExpression.h"


bool AndExpression::Interpret(const std::string &text)
{
	return m_exp1->Interpret(text) && m_exp2->Interpret(text);
}