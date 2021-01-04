#pragma once
#include "IComputerPart.h"

class Monitor : public IComputerPart {
public:
	void Accept(IComputerVisitor *pcv) override;
};

