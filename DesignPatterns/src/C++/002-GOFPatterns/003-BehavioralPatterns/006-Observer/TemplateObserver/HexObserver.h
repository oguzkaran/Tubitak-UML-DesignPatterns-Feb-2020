#pragma once
#include "Integer.h"
#include "Observer.h"

class HexObserver : public Observer<Integer> {
public:
	HexObserver(Integer &i) : Observer<Integer>{ &i } {}
public:
	void Update() override;
};

