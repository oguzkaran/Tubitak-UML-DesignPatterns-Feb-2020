#pragma once
#include <string>

class EditText final {
public:	
	EditText(const std::string &text) : m_text{ text } {}
	void SetText(const std::string &text);
	std::string GetText() const { return m_text; }
private:
	std::string m_text;
	//...
};

