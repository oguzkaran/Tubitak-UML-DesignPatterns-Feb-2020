#pragma once

#include "Input.h"

size_t Input::Read(char *buf, size_t startIndex, size_t size)
{
	size_t read{ 0 };

	for (auto i = startIndex; i < size; ++i) {
		int val = Read();

		if (val == 0)
			break;

		++read;
		buf[i] = val;
	}

	return read;
}