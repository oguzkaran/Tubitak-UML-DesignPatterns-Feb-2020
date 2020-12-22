#include "Mouse.h"
#include "ComputerPartVisitor.h"

void Mouse::Accept(IComputerVisitor *pcv)
{
	//...
	pcv->Visit(this);
}

