#include <iostream>
#include <cstddef>
#include "BorderedEditText.h"

using namespace std;

BorderedEditText::BorderedEditText(const std::string &text, size_t borderWidth)
	: m_editText{ text }, m_borderWidth{ borderWidth }
{
	setBorder();
}

void BorderedEditText::SetText(const string &text)
{
	//...
	m_editText.SetText(text);
}

void BorderedEditText::SetBorderWidth(int borderWidth)
{
	//...
	m_borderWidth = borderWidth;
	setBorder();
}

void BorderedEditText::setBorder()
{
	cout << "Setting border with Width:" << m_borderWidth << endl;
}