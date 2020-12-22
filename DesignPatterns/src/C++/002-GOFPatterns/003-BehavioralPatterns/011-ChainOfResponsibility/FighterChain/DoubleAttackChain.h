#pragma once

#include "FighterChain.h"

class DoubleAttackChain : public FighterChain {
public:
	using FighterChain::FighterChain;
public:
	void Handle() override;	
};

