#pragma once

#include <memory>
#include <utility>

#include "Fighter.h"

class FighterChain {
protected:
    FighterChain *next;
protected:
    std::shared_ptr<Fighter> fighter;
public:
	explicit FighterChain(std::shared_ptr<Fighter> c)
		: fighter{std::move( c )}, next{ nullptr } {}
public:
	void AddChain(FighterChain *cc);
	void SetChain(FighterChain *cc);	
	virtual void Handle();
};

