#include <iostream>
#include "Value.h"

using namespace std;

using IntValue = Value<int, -128, 127>;

#if 1
int main()
{	
	auto val = Value<int, -128, 127>::ValueOf(10);
    auto val2 = IntValue::ValueOf(10);

	return 0;
}

#endif
