#pragma once

#include "IODevice.h"
#include "DeviceFactory.h"

class IODeviceFactory : public DeviceFactory {
public:
	virtual std::unique_ptr<Device> createIODevice(int maxSlotNumber, const std::string &name, const std::string &protocol);	
	std::unique_ptr<Device> requestDevice() override;
	virtual ~IODeviceFactory() = default;
};