#include "DeviceCareTaker.h"

using namespace std;

void DeviceCareTaker::AddDeviceMemento(shared_ptr<DeviceInfoMemento> mem)
{
	m_devices.push_back(mem);
}

shared_ptr<DeviceInfoMemento> DeviceCareTaker::operator[](size_t index)
{
	return m_devices[index];
}
