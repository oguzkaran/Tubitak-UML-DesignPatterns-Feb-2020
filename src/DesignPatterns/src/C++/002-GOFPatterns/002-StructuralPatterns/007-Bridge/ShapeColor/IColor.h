#pragma once

#include <cstdint>

struct IColor {
	virtual void FillColor() = 0;
	virtual ~IColor() = default;
};
