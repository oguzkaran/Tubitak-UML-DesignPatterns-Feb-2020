#include <iostream>
#include "NormalDoor.h"

using namespace std;

void NormalDoor::Open()
{
	cout << "NormalDoor::Open" << endl;
	m_isOpen = true;
}

void NormalDoor::Close()
{
	cout << "NormalDoor::Close" << endl;
	m_isOpen = false;
}

bool NormalDoor::IsOpen()
{
	cout << "NormalDoor::IsOpen" << endl;

	return m_isOpen;
}

void NormalDoor::SetOpen(bool isOpen)
{
	//...
	m_isOpen = isOpen;
}