#pragma once

#include <cstddef>

struct ITransmission {
	virtual size_t send(const char *buf, size_t size) = 0;
	virtual size_t receive(char *buf, size_t size) = 0;
	virtual ~ITransmission() = default;
};
