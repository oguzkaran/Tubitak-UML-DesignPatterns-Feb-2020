#include <iostream>
#include "BorderedEditText.h"

using namespace std;

BorderedEditText::BorderedEditText(const std::string &text, size_t width, size_t height, size_t borderWidth, const Color &c)
        : BorderedEditText{text, width, height, borderWidth, c.r, c.g, c.b}
{}

BorderedEditText::BorderedEditText(const std::string &text, size_t width, size_t height, size_t borderWidth, uint8_t r, uint8_t g, uint8_t b)
	: EditText{ text, width, height }, m_borderWidth{ borderWidth }, m_r{ r }, m_g{ g }, m_b{ b }
{
	SetBorder(m_borderWidth);
	SetColor(m_r, m_b, m_b);
}

void BorderedEditText::SetBorder(size_t borderWidth)
{
	//...
	cout << "Setting border with Width:" << m_borderWidth << endl;
	m_borderWidth = borderWidth;	
}

void BorderedEditText::SetColor(uint8_t r, uint8_t g, uint8_t b)
{
	//...
	cout << "Setting color:(" << static_cast<int>(r) << ", " << static_cast<int>(g) << ", " << static_cast<int>(b) << ")" << endl;
	m_r = r;
	m_g = g;
	m_b = b;	
}