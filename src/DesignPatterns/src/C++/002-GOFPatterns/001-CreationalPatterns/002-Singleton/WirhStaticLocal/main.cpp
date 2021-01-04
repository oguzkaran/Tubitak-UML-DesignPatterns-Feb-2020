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
    TemperatureAppDAL &temperatureAppDal = TemperatureAppDAL::get_instance();

    TemperatureAppDAL::get_instance().url() = "postgresql://www.csystem.org:5433/temperatureappdb";

    cout << TemperatureAppDAL::get_instance().url() << "\n";

    TemperatureAppDAL::get_instance().url() = "postgresql://www.csystem.org:5432/temperatureappdb";

    cout << TemperatureAppDAL::get_instance().url() << "\n";

    return 0;
}

#endif
