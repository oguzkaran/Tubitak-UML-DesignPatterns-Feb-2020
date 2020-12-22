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

	HexObserver hob{ &i };
	OctalObserver oob{ &i };
	DecimalObserver dob{ &i };

	i.AttachObserver(hob);
	i.AttachObserver(oob);
	i.AttachObserver(dob);

	i.SetVal(20);
	cout << "///////////////////\n";

	i.SetVal(20);

    cout << "///////////////////\n";

    i.SetVal(30);


	return 0;
}

#endif
