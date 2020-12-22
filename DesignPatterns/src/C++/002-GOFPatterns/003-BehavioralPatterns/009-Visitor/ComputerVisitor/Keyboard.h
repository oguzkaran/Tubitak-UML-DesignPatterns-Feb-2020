#pragma once
#include "IComputerPart.h"

class Keyboard : public IComputerPart {
public:
	void Accept(IComputerVisitor *pcv) override;
};

