#include "IncreaseDefenceChain.h"
#include <iostream>

using namespace std;

void IncreaseDefenceChain::Handle()
{
	fighter->SetDefence(fighter->GetDefence() + 1);
	cout << "IncreaseDefenceChain" << endl;

	FighterChain::Handle(); //Dikkat zincirin devam etmesi icin gerekli
}


