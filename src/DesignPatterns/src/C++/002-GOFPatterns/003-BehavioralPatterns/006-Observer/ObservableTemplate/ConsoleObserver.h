#pragma once

#include <iostream>
#include <string>
#include "Device.h"
#include "IObserver.h"

struct ConsoleDeviceObserver : public IObserver<Device> {
	ConsoleDeviceObserver(const char *name) : m_name{ name }
	{}
	void FieldChanged(Device &d, const std::string &name) override
	{
		std::cout << m_name << ":" << std::endl;
		std::cout << "Field Name:" << name << " changed" << std::endl;		
		std::cout << "Field Value:" << d.GetName() << std::endl;
 	}
private:
	std::string m_name;
};
