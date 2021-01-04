#include "IODeviceFactory.h"

using namespace std;

std::unique_ptr<Device> IODeviceFactory::createIODevice(int maxSlotNumber, const std::string &name, const std::string &protocol)
{
	++numberOfDevices;
	return make_unique<IODevice>(maxSlotNumber, name, protocol);
}

unique_ptr<Device> IODeviceFactory::requestDevice()
{
	return createIODevice(12, "testiodevice", "mest");
}