#pragma once

#include "FighterChain.h"

class IncreaseDefenceChain : public FighterChain {
public:
	using FighterChain::FighterChain;
public:
	void Handle() override;	
};

