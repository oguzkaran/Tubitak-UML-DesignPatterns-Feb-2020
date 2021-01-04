#include <stdexcept>
#include <utility>
#include "TemperatureAppDAL.h"

int TemperatureAppDAL::ms_counter;

void TemperatureAppDAL::control()
{
    ++ms_counter;

    if (ms_counter > 1)
        throw std::runtime_error("Can not create instance more than once for TemperatureAppDAL class");
}

TemperatureAppDAL::TemperatureAppDAL(std::string url) : m_url{std::move(url)}
{
    control();
    //...
}


