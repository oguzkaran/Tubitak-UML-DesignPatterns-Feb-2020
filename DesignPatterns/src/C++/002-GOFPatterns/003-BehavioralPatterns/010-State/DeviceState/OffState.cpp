
#include "OffState.h"
#include "OnState.h"

#include "Device.h"
#include <iostream>

using namespace std;

void OffState::On(Device *dev)
{
	cout << "off state gets on state" << endl;
	dev->SetState(make_unique<OnState>());
}

void OffState::Off(Device *dev)
{
	cout << "off state gets off state" << endl;
}

void OffState::Pause(Device *dev)
{
	cout << "off state gets pause state" << endl;	
}