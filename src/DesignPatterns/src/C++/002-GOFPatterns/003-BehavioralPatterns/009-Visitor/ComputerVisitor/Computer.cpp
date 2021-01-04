#include "Computer.h"
#include "ComputerPartVisitor.h"

void Computer::AddPart(IComputerPart *pc)
{
	m_parts.push_back(pc);
}
void Computer::Accept(IComputerVisitor *pcv)
{
	for (auto cp : m_parts)
		cp->Accept(pcv);

	pcv->Visit(this);
}


