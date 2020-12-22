
#include "OptionalLogger.h"

using namespace std;

shared_ptr<ILogger> OptionalLogger::noLog{};

void OptionalLogger::Information(const std::string &msg)
{
	if (m_logger)
		m_logger->Information(msg);
}
void OptionalLogger::Warning(const std::string &msg)
{
	if (m_logger)
		m_logger->Warning(msg);
}