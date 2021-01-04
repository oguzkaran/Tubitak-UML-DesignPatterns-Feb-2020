#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "BaloonFactory.h"

inline void randomize()
{
    std::srand(static_cast<unsigned int>(time(nullptr)));
}

using namespace std;

int main()
{
    randomize();

    BaloonFactory baloonFactory;

    for (size_t i{0}; i < 10; ++i) {
        auto baloon = baloonFactory.get_random_baloon();

        baloon->fly();
    }

    return 0;
}

#endif
