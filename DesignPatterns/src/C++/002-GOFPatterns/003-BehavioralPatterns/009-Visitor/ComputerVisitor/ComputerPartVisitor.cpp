#include "ComputerPartVisitor.h"

#include <iostream>

using namespace std;

void ComputerPartVisitor::Visit(Mouse *m)
{
	cout << "Mouse" << endl;
}

void ComputerPartVisitor::Visit(Keyboard *k)
{
	cout << "Keyboard" << endl;
}

void ComputerPartVisitor::Visit(Monitor *m)
{
	cout << "Monitor" << endl;
}

void ComputerPartVisitor::Visit(Computer *c)
{
	cout << "Computer" << endl;
}