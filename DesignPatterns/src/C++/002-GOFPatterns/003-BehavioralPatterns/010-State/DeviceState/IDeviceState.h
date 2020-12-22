#pragma once

class Device;

struct IDeviceState {
	virtual void On(Device *dev) = 0;
	virtual void Off(Device *dev) = 0;
	virtual void Pause(Device *dev) = 0;
};