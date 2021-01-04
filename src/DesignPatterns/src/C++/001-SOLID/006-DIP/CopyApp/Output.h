#pragma once

#include <stddef.h>

class Output {
public:
	virtual size_t Write(const char *buf, size_t startIndex, size_t size) ;
	virtual size_t Write(int ch) = 0;
	virtual ~Output() = default;
};
