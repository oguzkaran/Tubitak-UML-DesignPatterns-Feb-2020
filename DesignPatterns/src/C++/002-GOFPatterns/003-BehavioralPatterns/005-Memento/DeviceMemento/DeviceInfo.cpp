#include "DeviceInfo.h"
#include "devicecommon.h"

using namespace std;

void DeviceInfo::AddPort(uint16_t port)
{
	m_ports.push_back(port);
}

uint16_t DeviceInfo::operator [](size_t index) const
{
	return m_ports[index];
}

uint16_t &DeviceInfo::operator [](size_t index)
{
	return m_ports[index];
}

std::shared_ptr<DeviceInfoMemento> DeviceInfo::CreateMemento()
{
	return make_shared<DeviceInfoMemento>(*this);
}