#pragma once
#include <string>
#include "ILogger.h"

class NoLogger : public ILogger {
public:
	void Information(const std::string &msg)  override;
	void Warning(const std::string &msg)  override;
};



