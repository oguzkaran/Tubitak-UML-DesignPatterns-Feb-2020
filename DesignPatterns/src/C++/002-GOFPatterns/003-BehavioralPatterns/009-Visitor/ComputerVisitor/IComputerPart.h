#pragma once

struct IComputerVisitor;

struct IComputerPart {
	virtual void Accept(IComputerVisitor *pcv) = 0;
	virtual ~IComputerPart() = default;
};

