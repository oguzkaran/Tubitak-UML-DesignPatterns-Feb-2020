#pragma once

struct ITimerClient {
	virtual void Register() = 0;
	virtual ~ITimerClient() = default;
};
