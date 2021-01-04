#include "Monitor.h"
#include "ComputerPartVisitor.h"

void Monitor::Accept(IComputerVisitor *pcv)
{
	//...
	pcv->Visit(this);
}

