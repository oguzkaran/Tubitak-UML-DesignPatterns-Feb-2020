#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "IntValue.h"

using namespace std;

int main()
{
    auto n1 = IntValue::value_of(10);
    auto n2 = IntValue::value_of(10);

    std::cout << std::boolalpha << (n1 == n2) << endl;

    return 0;
}

#endif
