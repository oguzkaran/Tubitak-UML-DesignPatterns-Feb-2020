#include "FighterChain.h"


void FighterChain::AddChain(FighterChain *cc)
{
	if (next != nullptr)
		next->AddChain(cc);
	else
		next = cc;
}

void FighterChain::SetChain(FighterChain *cc)
{
	next = cc;
}

void FighterChain::Handle()
{
	if (next != nullptr)
		next->Handle();
}

