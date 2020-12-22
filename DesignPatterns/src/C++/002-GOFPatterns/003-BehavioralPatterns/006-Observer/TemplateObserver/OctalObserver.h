#pragma once
#include "Observer.h"
#include "Integer.h"

class OctalObserver : public Observer<Integer> {
public:
	OctalObserver(Integer &i) : Observer<Integer>{ &i } {}
public:
	void Update() override;
};

