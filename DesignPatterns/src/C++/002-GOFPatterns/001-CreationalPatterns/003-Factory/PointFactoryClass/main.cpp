#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>

#include "PointFactory.h"
#include "Point.h"

using namespace std;

int main()
{
    PointFactory pointFactory;

    auto pc = pointFactory.get_cartesian(100, 100);
    auto pp = pointFactory.get_polar(100, 100);

    cout << pc.to_string() << endl;
    cout << pp.to_string() << endl;

    cout << "Number of points:" << pointFactory.get_number_of_points() << endl;

    return 0;
}

#endif
