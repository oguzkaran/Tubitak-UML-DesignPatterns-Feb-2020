#pragma once
#include <vector>

#include "IComputerPart.h"

class Computer : public IComputerPart {
public:
	void AddPart(IComputerPart *pc);	
public:
	void Accept(IComputerVisitor *pcv);
private:
	std::vector<IComputerPart *> m_parts;
};

