#pragma once

#include <memory>
#include "IDeviceState.h"
#include "OffState.h"

class Device {
    //...
public:
	Device() : m_state{ std::make_unique<OffState>() } {}
public:
	void SetState(std::unique_ptr<IDeviceState> state);	
	void On();	
	void Off();	
	void Pause();	
public:
	std::unique_ptr<IDeviceState> m_state;	
};

