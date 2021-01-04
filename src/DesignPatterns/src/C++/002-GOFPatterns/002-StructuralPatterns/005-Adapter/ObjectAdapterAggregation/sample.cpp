#include <iostream>
#include "IntNumberAdapter.h"

using namespace std;

#if 1
int main()
{
	IntNumber in{ 10 };
	IntNumberAdapter n{ &in, 20 };

	cout << n << endl;

	return 0;
}

#endif
