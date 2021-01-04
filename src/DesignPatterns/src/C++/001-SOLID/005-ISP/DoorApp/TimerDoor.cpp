#include <iostream>
#include "TimerDoor.h"

using namespace std;

void TimerDoor::Open()
{
	cout << "TimerDoor::Open" << endl;
}
void TimerDoor::Close()
{
	cout << "TimerDoor::Close" << endl;
}
bool TimerDoor::IsOpen()
{
	cout << "TimerDoor::IsOpen" << endl;

	return true;
}

void TimerDoor::Timeout()
{
	cout << "TimerDoor::Timeout" << endl;
}
void TimerDoor::Register()
{
	cout << "TimerDoor::Register" << endl;
}


