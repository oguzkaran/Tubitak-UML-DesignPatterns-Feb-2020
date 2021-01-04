#pragma once

#include <string>

struct ILogger {
	virtual void Information(const std::string &msg) = 0;
	virtual void Warning(const std::string &msg) = 0;
	virtual ~ILogger() = default;
};