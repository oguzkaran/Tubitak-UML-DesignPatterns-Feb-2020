#pragma once

#include "Chain.h"
#include "Fighter.h"

class IncreaseDefenceChain : public Chain<Fighter> {
public:
	explicit IncreaseDefenceChain(std::shared_ptr<Fighter> e) : Chain<Fighter>{ e } {}
public:
	void Handle() override;
};

