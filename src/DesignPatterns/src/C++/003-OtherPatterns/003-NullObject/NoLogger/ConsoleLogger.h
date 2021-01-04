#pragma once
#include "ILogger.h"

class ConsoleLogger : public ILogger {
public:
	void Information(const std::string &msg)  override;
	void Warning(const std::string &msg)  override;
};

