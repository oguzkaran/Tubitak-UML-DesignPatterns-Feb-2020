#include "TemperatureAppDAL.h"

TemperatureAppDAL TemperatureAppDAL::ms_instance;


TemperatureAppDAL &TemperatureAppDAL::get_instance()
{
    return ms_instance;
}


TemperatureAppDAL &TemperatureAppDAL::get_instance(const std::string &url)
{
    if (url != "")
        ms_instance.m_url = url;

    return ms_instance;
}

TemperatureAppDAL &TemperatureAppDAL::get_instance(const char *url)
{
    ms_instance.m_url = url;

    return ms_instance;
}
