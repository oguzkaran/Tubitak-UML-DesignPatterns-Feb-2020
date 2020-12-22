#pragma once

#include "Chain.h"
#include "Fighter.h"

class DoubleAttackChain : public Chain<Fighter> {
public:
	explicit DoubleAttackChain(std::shared_ptr<Fighter> e) : Chain<Fighter>{ e } {}
public:
	void Handle() override;
};

