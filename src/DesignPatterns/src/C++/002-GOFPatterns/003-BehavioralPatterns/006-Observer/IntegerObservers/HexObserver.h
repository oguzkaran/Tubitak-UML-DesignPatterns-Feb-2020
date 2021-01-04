#pragma once
#include "IntegerObserver.h"

class HexObserver : public IntegerObserver {
public:
	using IntegerObserver::IntegerObserver;
public:
	void Update() override;
};

