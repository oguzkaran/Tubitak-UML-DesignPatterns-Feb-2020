#include <cstdio>
#include "OctalObserver.h"

using namespace std;

void OctalObserver::Update()
{
	printf("%o\n", m_t->GetVal());
}

