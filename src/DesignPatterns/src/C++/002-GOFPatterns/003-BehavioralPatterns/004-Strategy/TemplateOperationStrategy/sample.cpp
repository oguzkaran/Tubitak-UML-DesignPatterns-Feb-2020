#include <iostream>
#include "IntOperationContext.h"
#include "IntAddOperationStrategy.h"
#include "IntAddWithValueOperationStrategy .h"

using namespace std;

#if 1
int main()
{
	IntAddOperationStrategy as;
	IntAddWithValueOperationStrategy aws{ 3 };
	IntOperationContext context{10, 20, as };

	cout << context.execute() << endl;

	context.SetStrategy(aws);

	cout << context.execute() << endl;

	return 0;
}

#endif
