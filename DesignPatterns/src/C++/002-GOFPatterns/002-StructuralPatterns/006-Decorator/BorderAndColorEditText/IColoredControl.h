#pragma once

#include <cstdint>

struct IColoredControl {
	virtual void SetColor(std::uint8_t r, std::uint8_t g, std::uint8_t b) = 0;
	virtual ~IColoredControl() = default;
};
