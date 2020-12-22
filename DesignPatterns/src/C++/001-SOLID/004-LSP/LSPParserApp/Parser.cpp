#include <iostream>
#include <cctype>
#include "Parser.hpp"

using namespace std;

void Parser::SetSource(ISource *src)
{
	//...
	m_src = src;
}

void Parser::DoParse()
{
	auto count = 0;
	int ch;

	while ((ch = m_src->GetNextChar()) != -1)
		if (isspace(ch))
			++count;

	cout << "Count:" << count << endl;
}


