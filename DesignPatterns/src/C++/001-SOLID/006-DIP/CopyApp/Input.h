#pragma once

#include <stddef.h>

class Input {
public:
	virtual size_t Read(char *buf, size_t startIndex, size_t size);
	virtual int Read() = 0;
	virtual ~Input() = default;
};
