#include <iostream>
#include "Device.h"

using namespace std;

#if 1
int main()
{
	Device d;

	d.On();
	d.Off();
	d.Off();
	d.Pause();
	d.On();
	d.Pause();
	d.On();
	d.Off();

	return 0;
}

#endif
