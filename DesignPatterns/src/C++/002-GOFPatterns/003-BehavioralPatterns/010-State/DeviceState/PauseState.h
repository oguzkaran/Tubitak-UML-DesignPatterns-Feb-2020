#pragma once
#include "IDeviceState.h"
class Device;

class PauseState : public IDeviceState {
public:
	void On(Device *dev) override;
	void Off(Device *dev) override;
	void Pause(Device *dev) override;
};

