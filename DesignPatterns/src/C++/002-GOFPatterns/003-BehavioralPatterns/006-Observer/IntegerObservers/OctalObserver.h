#pragma once
#include "IntegerObserver.h"

class OctalObserver : public IntegerObserver {
public:
	using IntegerObserver::IntegerObserver;
public:
	void Update() override;
};

