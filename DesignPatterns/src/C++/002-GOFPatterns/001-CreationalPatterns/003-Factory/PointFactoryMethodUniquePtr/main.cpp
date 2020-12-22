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
    auto upc = Point::get_cartesian(100, 100);
    auto upp = Point::get_polar(100, 100);

    cout << upc->to_string() << endl;
    cout << upp->to_string() << endl;


    return 0;
}

#endif
