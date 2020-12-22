#include <iostream>
#include "devicecommon.h"

using namespace std;

#if 1
int main()
{
	DeviceInfo di{ "test", "//123.56.78.78" };

	di.AddPort(6767);

	cout << "Port:" << di[0] << endl;

	di.CreateMemento();

	di[0] = 2323;

	di.CreateMemento();

	cout << "Port:" << di[0] << endl;

	di.Undo();

	cout << "Port:" << di[0] << endl;

	di.Redo();

	cout << "Port:" << di[0] << endl;

	return 0;
}

#endif
