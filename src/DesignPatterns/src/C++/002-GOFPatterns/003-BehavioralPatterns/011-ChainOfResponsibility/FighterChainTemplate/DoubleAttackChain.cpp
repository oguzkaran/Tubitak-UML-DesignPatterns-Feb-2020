#include "DoubleAttackChain.h"
#include <iostream>

using namespace std;

void DoubleAttackChain::Handle()
{
	entity->SetAttack(entity->GetAttack() * 2);
	cout << "DoubleAttackChain" << endl;

	Chain<Fighter>::Handle(); //Dikkat zincirin devam etmesi icin gerekli
}


