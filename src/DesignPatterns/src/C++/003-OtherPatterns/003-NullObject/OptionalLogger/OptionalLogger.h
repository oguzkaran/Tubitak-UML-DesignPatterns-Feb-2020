#pragma once
#include <string>
#include <memory>
#include <utility>
#include "ILogger.h"

class OptionalLogger : public ILogger {
public:
	static std::shared_ptr<ILogger> noLog;
public:
	explicit OptionalLogger(std::shared_ptr<ILogger> logger) : m_logger{std::move(logger)} {}
public:
	void Information(const std::string &msg)  override;
	void Warning(const std::string &msg)  override;
private:
	std::shared_ptr<ILogger> m_logger;
};



