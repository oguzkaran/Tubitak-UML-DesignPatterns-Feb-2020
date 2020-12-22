#pragma once

#include <memory>
#include <utility>
#include "DeviceInfo.h"

class DeviceInfoMemento { //Memento class
	friend class DeviceInfo;
public:
	explicit DeviceInfoMemento(DeviceInfo device)
		: m_device{std::move( device )} {}
	[[nodiscard]] DeviceInfo GetDeviceInfo() const { return m_device; }
private:
	DeviceInfo m_device;
	//...
};

