#pragma once
#include "Integer.h"
#include "Observer.h"

class DecimalObserver : public Observer<Integer> {
public:
	DecimalObserver(Integer &i) : Observer<Integer>{ &i } {}
public:
	void Update() override;
};

