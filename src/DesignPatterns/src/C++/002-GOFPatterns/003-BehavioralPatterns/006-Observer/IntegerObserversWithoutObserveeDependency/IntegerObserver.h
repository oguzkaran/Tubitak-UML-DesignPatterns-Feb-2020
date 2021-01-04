#pragma once

#include "Integer.h"

struct IntegerObserver {
	virtual void Update(int newVal) = 0;
	virtual ~IntegerObserver() = default;
};

