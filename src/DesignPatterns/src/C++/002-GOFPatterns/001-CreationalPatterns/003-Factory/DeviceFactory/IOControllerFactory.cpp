#include "IOControllerFactory.h"

using namespace std;

std::unique_ptr<Device> IOControllerFactory::createIOController(const std::string &name, const std::string &protocol)
{
	++numberOfDevices;
	return std::move(make_unique<IOController>(name, protocol));
}

unique_ptr<Device> IOControllerFactory::requestDevice()
{
	return std::move(createIOController("testcontroller", "jest"));
}