#pragma once

#include "Device.h"


class IODevice : public Device {
public:
	IODevice(int maxSlotNumber, const std::string &name, const std::string &protocol) : Device{ name, protocol }, m_maxSlotNumber{ maxSlotNumber } {}
	void sendAlarm(const std::string &alarm) override;
	virtual ~IODevice() = default;
private:
	int m_maxSlotNumber;
};
