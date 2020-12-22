#include "DoubleAttackChain.h"
#include <iostream>

using namespace std;

void DoubleAttackChain::Handle()
{
	fighter->SetAttack(fighter->GetAttack() * 2);
	cout << "DoubleAttackChain" << endl;

	FighterChain::Handle(); //Dikkat zincirin devam etmesi icin gerekli
}


