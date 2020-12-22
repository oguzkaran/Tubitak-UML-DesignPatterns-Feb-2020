#include "TerminalExpression.h"

using namespace std;

bool TerminalExpression::Interpret(const std::string &text)
{
	return text.find(m_str) != string::npos;		
}