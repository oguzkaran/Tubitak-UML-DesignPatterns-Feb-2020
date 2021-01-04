#include <iostream>
#include <string>
#include "ConsoleObserver.h"
#include "Device.h"

using namespace std;

int main()
{
	Device d{ "Test", "BSHG" };
	ConsoleDeviceObserver co1{ "Observer1" };
	ConsoleDeviceObserver co2{ "Observer2" };

	d.Attach(co1);
	d.Attach(co2);

	d.SetName("Mest");
	
	return 0;
}



