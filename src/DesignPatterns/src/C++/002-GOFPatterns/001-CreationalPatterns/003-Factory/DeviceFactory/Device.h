#pragma once

#include <string>

class Device {
public:
	Device(const std::string &name, const std::string &protocol) 
		: m_name{ name }, m_protocol{ protocol }
	{}
	virtual void sendAlarm(const std::string &alarm) = 0;	
	virtual ~Device() = default;
private:
	std::string m_name;
	std::string m_protocol;
};