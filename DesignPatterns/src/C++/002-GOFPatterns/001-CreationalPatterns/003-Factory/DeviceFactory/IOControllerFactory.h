#pragma once

#include "IOController.h"
#include "DeviceFactory.h"

class IOControllerFactory : public DeviceFactory {
public:	
	virtual std::unique_ptr<Device> createIOController(const std::string &name, const std::string &protocol);
	std::unique_ptr<Device> requestDevice() override;
	virtual ~IOControllerFactory() = default;
};
