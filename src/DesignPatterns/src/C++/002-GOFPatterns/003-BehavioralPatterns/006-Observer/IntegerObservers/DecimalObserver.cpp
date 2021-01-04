#include <cstdio>
#include "DecimalObserver.h"

using namespace std;

void DecimalObserver::Update()
{
	printf("%d\n", m_pi->GetVal());
}

