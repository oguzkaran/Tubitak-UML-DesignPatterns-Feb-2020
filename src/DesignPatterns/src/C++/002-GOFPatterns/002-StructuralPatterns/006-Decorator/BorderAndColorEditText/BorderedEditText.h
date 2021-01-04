#pragma once

#include <string>
#include <cstddef>
#include "EditText.h"
#include "IBorderedControl.h"
#include "IColoredControl.h"
#include "Color.h"

class BorderedEditText : public EditText, public IBorderedControl, public IColoredControl {
public:
    BorderedEditText(const std::string &text, size_t width, size_t height, size_t borderWidth, const Color &r);
	BorderedEditText(const std::string &text, size_t width, size_t height, size_t borderWidth, std::uint8_t r, std::uint8_t g, std::uint8_t b);
public:	
	size_t GetBorderWidth() const { return m_borderWidth; }
	void SetBorder(size_t borderWidth) override;
	void SetColor(std::uint8_t r, std::uint8_t g, std::uint8_t b) override;
private:	
	size_t m_borderWidth;
	uint8_t m_r, m_g, m_b;
};

