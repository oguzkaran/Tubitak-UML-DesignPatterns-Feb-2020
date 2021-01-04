#include <iostream>
#include "IODeviceFactory.h"
#include "IOControllerFactory.h"

using namespace std;

int main()
{
	IODeviceFactory iodevfactory;

	auto dev =  iodevfactory.requestDevice();

	dev->sendAlarm("dikkat");

	IOControllerFactory ioconfactory;

	auto dev2 = ioconfactory.requestDevice();

	dev2->sendAlarm("uyari");

	auto dev3 = iodevfactory.requestDevice();

	dev3->sendAlarm("Test");

	cout << "Number of IODevices:" << iodevfactory.GetNumberOfDevices() << endl;
	cout << "Number of IOControllers:" << ioconfactory.GetNumberOfDevices() << endl;
}