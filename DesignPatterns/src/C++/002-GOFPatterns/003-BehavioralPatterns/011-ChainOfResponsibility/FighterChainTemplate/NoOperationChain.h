#pragma once

#include "Chain.h"
#include "Fighter.h"

class NoOperationChain : public Chain<Fighter> {
public:
	explicit NoOperationChain(std::shared_ptr<Fighter> e) : Chain<Fighter>{ e } {}
public:
	void Handle() override;
};

