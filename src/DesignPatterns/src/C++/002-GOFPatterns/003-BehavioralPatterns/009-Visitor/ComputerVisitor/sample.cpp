#include <iostream>
#include "ComputerPartVisitor.h"
#include "Computer.h"
#include "Monitor.h"
#include "Mouse.h"
#include "Keyboard.h"

using namespace std;

#if 1
int main()
{
	Computer c;
	Mouse m;
	Keyboard kb;
	Monitor mon;

	c.AddPart(&m);
	c.AddPart(&kb);
	c.AddPart(&mon);

	ComputerPartVisitor cpv;

	c.Accept(&cpv);		

	return 0;
}

#endif

