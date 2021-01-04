
#include "OnState.h"
#include "PauseState.h"

#include "Device.h"
#include <iostream>
#include <memory>

using namespace std;

void OnState::On(Device *dev)
{
	cout << "on state gets on state" << endl;	
}

void OnState::Off(Device *dev)
{
	cout << "on state gets off state" << endl;

	dev->SetState(make_unique<OffState>());
}

void OnState::Pause(Device *dev)
{
	cout << "on state gets pause state" << endl;
	dev->SetState(make_unique<PauseState>());
}
