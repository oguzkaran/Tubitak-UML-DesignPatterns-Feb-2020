#pragma once

#include <memory>
#include "DeviceInfo.h"

class DeviceInfoMemento { //Memento class
	friend class DeviceInfo;
public:
	explicit DeviceInfoMemento(const DeviceInfo &device)
		: m_device{ device } {}
	[[nodiscard]] DeviceInfo GetDeviceInfo() const { return m_device; }
private:
	DeviceInfo m_device;
	//...
};

