#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>

#include "Point.h"

using namespace std;

int main()
{
    Point pc{100, 100};
    Point pp{100, 100, PointInfo::POLAR};

    cout << pc.to_string() << endl;
    cout << pp.to_string() << endl;


    return 0;
}

#endif
