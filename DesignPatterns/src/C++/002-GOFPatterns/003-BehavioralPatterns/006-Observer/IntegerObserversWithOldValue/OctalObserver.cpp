#include <cstdio>
#include "OctalObserver.h"

using namespace std;

void OctalObserver::Update(int oldVal)
{
	printf("Old Value:%o\n", oldVal);
	printf("New Value:%o\n", m_pi->GetVal());
}

