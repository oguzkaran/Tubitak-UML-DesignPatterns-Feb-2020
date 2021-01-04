#include <iostream>
#include "Integer.h"
#include "DecimalObserver.h"
#include "HexObserver.h"
#include "OctalObserver.h"

using namespace std;

#if 1
int main()
{
	Integer i{ 10 };

	HexObserver hob;
	OctalObserver oob;
	DecimalObserver dob;

	i.AttachObserver(hob);
	i.AttachObserver(oob);
	i.AttachObserver(dob);

	i.SetVal(14);
	cout << "/////////////////\n";
	i.SetVal(14);
    cout << "/////////////////\n";
    i.SetVal(12345);

	return 0;
}

#endif
