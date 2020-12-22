#include "DeviceInfo.h"
#include "devicecommon.h"

using namespace std;

DeviceInfo::DeviceInfo(const std::string &name, const std::string &url)
	: m_name{ name }, m_url{ url }
{
	m_memInfo.m_current++;
	m_memInfo.m_mems.push_back(make_shared<DeviceInfoMemento>(*this));
}

DeviceInfo &DeviceInfo::operator=(const DeviceInfo &d)
{
	if (this == &d)
		return *this;

	m_name = d.m_name;
	m_ports = d.m_ports;

	return *this;
}

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
	shared_ptr<DeviceInfoMemento> mem = make_shared<DeviceInfoMemento>(*this);

	m_memInfo.m_current++;
	m_memInfo.m_mems.push_back(mem);

	return mem;
}

void DeviceInfo::Undo()
{
	if (m_memInfo.m_current == -1)
		return;

	m_memInfo.m_current--;
	*this = m_memInfo.m_mems[m_memInfo.m_current]->GetDeviceInfo();
}

void DeviceInfo::Redo()
{
	if (m_memInfo.m_current >= m_memInfo.m_mems.size() - 1)
		return;

	m_memInfo.m_current++;
	*this = m_memInfo.m_mems[m_memInfo.m_current]->GetDeviceInfo();
}