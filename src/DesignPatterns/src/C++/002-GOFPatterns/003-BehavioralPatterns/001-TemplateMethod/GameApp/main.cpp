#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "AbstractGame.h"
#include "CarGame.h"

using namespace std;

int main()
{
    CarGame carGame;
    AbstractGame &r = carGame;

    r.run();

    return 0;
}

#endif
