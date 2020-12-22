#pragma once
#include <vector>
#include <memory>
#include "devicecommon.h"

class DeviceCareTaker { //Care taker class
public:
	void AddDeviceMemento(std::shared_ptr<DeviceInfoMemento> mem);
	std::shared_ptr<DeviceInfoMemento> operator[](size_t index);
private:
	std::vector<std::shared_ptr<DeviceInfoMemento>> m_devices;
};

