#include "IncreaseDefenceChain.h"
#include <iostream>

using namespace std;

void IncreaseDefenceChain::Handle()
{
	entity->SetDefence(entity->GetDefence() + 1);
	cout << "IncreaseDefenceChain" << endl;

	Chain<Fighter>::Handle(); //Dikkat zincirin devam etmesi icin gerekli
}

