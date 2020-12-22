#include <stdexcept>
#include "TemperatureAppDAL.h"

std::string TemperatureAppDAL::m_url;

TemperatureAppDAL::TemperatureAppDAL(const std::string &url)
{
    m_url = url;
}