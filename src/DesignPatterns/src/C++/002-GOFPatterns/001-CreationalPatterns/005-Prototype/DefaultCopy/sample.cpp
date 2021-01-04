#include <iostream>

#include "ContactInfo.h"
#include "AddressInfo.h"

using namespace std;

#if 1
int main()
{
	ContactInfo ci{ "Oguz", "gokturk", 1 };
	ContactInfo ci2{ ci };

	cout << ci.name << endl;
	cout << ci.address.street << endl;
	cout << ci.address.no << endl;
	cout << ci2.name << endl;
	cout << ci2.address.street << endl;
	cout << ci2.address.no << endl;

	ci.address.no = 20;

	cout << ci.name << endl;
	cout << ci.address.street << endl;
	cout << ci.address.no << endl;
	cout << ci2.name << endl;
	cout << ci2.address.street << endl;
	cout << ci2.address.no << endl;	
}

#endif
