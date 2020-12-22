#pragma once
#include "IComputerPart.h"
#include "Mouse.h"
#include "Monitor.h"
#include "Keyboard.h"
#include "Computer.h"

struct IComputerVisitor {
	virtual void Visit(Mouse *m) = 0;
	virtual void Visit(Keyboard *k) = 0;
	virtual void Visit(Monitor *m) = 0; 
	virtual void Visit(Computer *c) = 0;
	virtual ~IComputerVisitor() = default;
};
