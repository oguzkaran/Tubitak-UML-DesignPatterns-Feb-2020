#pragma once

#include "IComputerPart.h"

class Mouse : public IComputerPart {
public:
	void Accept(IComputerVisitor *pcv) override;
};

