#include <iostream>
#include <memory>
#include "DoubleAttackChain.h"
#include "IncreaseDefenceChain.h"
#include "NoOperationChain.h"
#include "Fighter.h"

using namespace std;

#if 1
int main()
{
	auto fighter = make_shared<Fighter>(5, 6);
	DoubleAttackChain dac{ fighter };
	DoubleAttackChain dac2{ fighter };
	IncreaseDefenceChain dc{ fighter };
	IncreaseDefenceChain dc2{ fighter };
	NoOperationChain nop{ fighter };
	
	dac.AddChain(&dc);
	dac.AddChain(&dac2);
	dac.AddChain(&dc2);
	dac.AddChain(&nop);

	dac.Handle();

	cout << "Attack:" << fighter->GetAttack() << endl;
	cout << "Defence:" << fighter->GetDefence() << endl;

	return 0;
}

#endif
