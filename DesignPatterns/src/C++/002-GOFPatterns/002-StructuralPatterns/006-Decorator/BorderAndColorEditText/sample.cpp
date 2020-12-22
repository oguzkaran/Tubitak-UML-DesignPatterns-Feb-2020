#include <iostream>
#include "BorderedEditText.h"

using namespace std;

#if 1
int main()
{
	BorderedEditText et{ "Name:", 100, 50, 3, 125, 234, 45};

	et.SetBorder(5);

	et.SetColor(255, 0, 255);

	Color c{245, 234, 123};

	BorderedEditText etName {"", 200, 100, 4, c};

	//...

	return 0;
}

#endif
