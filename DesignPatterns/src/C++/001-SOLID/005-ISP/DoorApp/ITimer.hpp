#pragma once

struct ITimer {
	virtual void Timeout() = 0;
	virtual ~ITimer() = default;
};