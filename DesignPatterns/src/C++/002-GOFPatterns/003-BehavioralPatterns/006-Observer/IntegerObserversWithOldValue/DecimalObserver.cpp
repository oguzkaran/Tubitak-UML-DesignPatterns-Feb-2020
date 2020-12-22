#include <cstdio>
#include "DecimalObserver.h"

using namespace std;

void DecimalObserver::Update(int oldVal)
{
	printf("Old Value:%d\n", oldVal);
	printf("New Value:%d\n", m_pi->GetVal());
}

