#pragma once

#include "IComputerVisitor.h"
#include "Mouse.h"
#include "Monitor.h"
#include "Keyboard.h"
#include "Computer.h"

class ComputerPartVisitor : public IComputerVisitor {
public:
	void Visit(Mouse *m) override;
	void Visit(Keyboard *k) override;
	void Visit(Monitor *m) override;
	void Visit(Computer *c) override;
};

