#include "Keyboard.h"
#include "ComputerPartVisitor.h"

void Keyboard::Accept(IComputerVisitor *pcv)
{
	//...
	pcv->Visit(this);
}
