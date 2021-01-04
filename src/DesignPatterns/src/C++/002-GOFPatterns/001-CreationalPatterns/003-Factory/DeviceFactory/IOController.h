#pragma once

#include "Device.h"

class IOController : public Device {
public:
	IOController(const std::string &name, const std::string &protocol) : Device{ name, protocol } {}
	void sendAlarm(const std::string &alarm) override;
	virtual ~IOController() = default;
private:
	//...
};
