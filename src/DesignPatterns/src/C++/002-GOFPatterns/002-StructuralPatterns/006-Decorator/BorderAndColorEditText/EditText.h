#pragma once
#include <string>
#include "Widget.h"

class EditText : public Widget {
public:	
	EditText(const std::string &text, size_t width, size_t height) 
		: Widget{ width, height }, m_text{ text } {}
	void SetText(const std::string &text);
	std::string GetText() const { return m_text; }
private:
	std::string m_text;
};

