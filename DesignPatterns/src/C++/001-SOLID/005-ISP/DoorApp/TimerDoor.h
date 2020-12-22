#pragma once
#include "IDoor.hpp"
#include "ITimer.hpp"
#include "ITimerClient.hpp"

class TimerDoor : public IDoor, public ITimer, public ITimerClient {
public: 
	void Open() override;
	void Close() override;
	bool IsOpen() override;
	void Timeout() override;
	void Register() override;
};

