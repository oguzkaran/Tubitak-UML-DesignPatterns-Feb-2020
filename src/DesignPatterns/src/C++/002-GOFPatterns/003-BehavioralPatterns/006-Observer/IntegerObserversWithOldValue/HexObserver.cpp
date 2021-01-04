#include <iostream>
#include <cstdio>
#include "HexObserver.h"

using namespace std;

void HexObserver::Update(int oldVal)
{
    cout << std::hex << "Old Value:" << oldVal << '\n';
    cout << std::hex << "Old Value:" << m_pi->GetVal() << '\n';
}

