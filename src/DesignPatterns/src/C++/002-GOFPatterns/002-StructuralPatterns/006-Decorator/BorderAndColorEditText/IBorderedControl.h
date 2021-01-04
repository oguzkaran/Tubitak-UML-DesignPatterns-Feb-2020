#pragma once

#include <cstddef>

struct IBorderedControl {
	virtual void SetBorder(size_t borderWidth) = 0;
	virtual ~IBorderedControl() = default;
};
