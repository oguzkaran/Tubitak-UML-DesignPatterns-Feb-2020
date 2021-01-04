#include <iostream>
#include "NormalDoor.h"
#include "TimerDoor.h"

using namespace std;

#if 1
int main()
{
	NormalDoor n{ false };

	cout << boolalpha << (n.IsOpen() ? "Açık" : "Kapalı") << endl;
	n.Open();
	cout << boolalpha << (n.IsOpen() ? "Açık" : "Kapalı") << endl;
	n.Close();
	cout << boolalpha << (n.IsOpen() ? "Açık" : "Kapalı") << endl;

	TimerDoor td;

	td.Register();
	cout << boolalpha << (td.IsOpen() ? "Açık" : "Kapalı") << endl;
	td.Open();
	cout << boolalpha << (td.IsOpen() ? "Açık" : "Kapalı") << endl;
	td.Close();
	cout << boolalpha << (td.IsOpen() ? "Açık" : "Kapalı") << endl;

	td.Timeout();
}

#endif
