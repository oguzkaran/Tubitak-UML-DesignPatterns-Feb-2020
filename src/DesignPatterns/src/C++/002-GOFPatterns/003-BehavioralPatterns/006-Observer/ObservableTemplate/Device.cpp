#include "Device.h"

void Device::SetName(std::string name)
{
	if (m_name == name)
		return;

    m_name = name;
	Notify(*this, std::string("name"));
}

void Device::SetProducer(std::string producer)
{
	if (m_producer == producer)
		return;

	m_producer = producer;
    Notify(*this, "producer");
}



