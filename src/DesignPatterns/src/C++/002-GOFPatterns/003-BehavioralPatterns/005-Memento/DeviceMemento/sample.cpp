#include <iostream>
#include "DeviceCareTaker.h"


using namespace std;

#if 1
int main()
{
	DeviceInfo di{ "test", "https://www.csystem.org/sensor" };
	DeviceCareTaker dc;

	di.AddPort(6767);

	dc.AddDeviceMemento(di.CreateMemento());

	di.AddPort(2323);

	dc.AddDeviceMemento(di.CreateMemento());

	shared_ptr<DeviceInfoMemento> mem1{ dc[0] };

	for (size_t i{0}; i < mem1->GetDeviceInfo().size(); ++i)
		cout << mem1->GetDeviceInfo()[i] << ' ';

	cout << '\n';

	shared_ptr<DeviceInfoMemento> mem2{ dc[1] };

	for (size_t i = 0; i < mem2->GetDeviceInfo().size(); ++i)
		cout << mem2->GetDeviceInfo()[i] << ' ';

	cout << '\n';

	return 0;
}

#endif
