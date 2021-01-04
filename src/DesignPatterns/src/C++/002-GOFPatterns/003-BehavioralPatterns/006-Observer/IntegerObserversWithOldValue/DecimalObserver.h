#pragma once
#include "IntegerObserver.h"

class DecimalObserver : public IntegerObserver {
public:
	using IntegerObserver::IntegerObserver;
public:
	void Update(int oldVal) override;
};

