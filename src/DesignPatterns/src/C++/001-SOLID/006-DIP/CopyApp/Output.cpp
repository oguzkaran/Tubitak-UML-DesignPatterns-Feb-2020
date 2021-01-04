#pragma once

#include "Output.h"

size_t Output::Write(const char *buf, size_t startIndex, size_t size)
{
	size_t written{ 0 };

	for (auto i = startIndex; i < size; ++i) {
		int result = Write(buf[i]);
		if (result == 0)
			break;

		++written;
	}

	return written;
}