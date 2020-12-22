#pragma once

#include <string>
#include <cstddef>
#include "EditText.h"

class BorderedEditText {
public:
	BorderedEditText(const std::string &text, size_t borderWidth);		
public:
	std::string GetText() const { return m_editText.GetText(); }
	size_t GetBorderWidth() const { return m_borderWidth; }
	void SetText(const std::string &text);
	void SetBorderWidth(int borderWidth);
private:
	void setBorder();
private:
	EditText m_editText;
	size_t m_borderWidth;
};

