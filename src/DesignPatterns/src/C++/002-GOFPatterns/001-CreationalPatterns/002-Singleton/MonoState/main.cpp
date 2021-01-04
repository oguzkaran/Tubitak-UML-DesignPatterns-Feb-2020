#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>

#include "TemperatureAppDAL.h"

using namespace std;

int main()
{
    TemperatureAppDAL temperatureAppDal1{"postgresql://www.csystem.org:5433/temperatureappdb"};

    cout << temperatureAppDal1.url() << "\n";
    TemperatureAppDAL temperatureAppDal2{"postgresql://www.csystem.org:5432/temperatureappdb"};
    cout << temperatureAppDal1.url() << "\n";

    return 0;
}

#endif
