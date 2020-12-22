#include <cstdio>
#include "HexObserver.h"

using namespace std;

void HexObserver::Update()
{
	printf("%X\n", m_pi->GetVal());
}

