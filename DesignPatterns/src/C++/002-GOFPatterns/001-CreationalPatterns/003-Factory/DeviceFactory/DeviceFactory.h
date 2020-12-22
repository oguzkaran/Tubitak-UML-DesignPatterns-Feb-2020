#pragma once

#include <memory>
#include "Device.h"

class DeviceFactory {
public:
	virtual std::unique_ptr<Device> requestDevice() = 0;
	virtual ~DeviceFactory() = default;
	size_t GetNumberOfDevices() const { return numberOfDevices; }
protected:
	size_t numberOfDevices = 0;
};
