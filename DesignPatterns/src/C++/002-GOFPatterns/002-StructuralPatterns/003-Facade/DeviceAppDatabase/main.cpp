#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "Device.h"
#include "PortInfo.h"
#include "DevicesAppHelper.h"


using namespace std;

int main()
{
    DevicesAppHelper helper;
    Device d;
    PortInfo pi;

    helper.save_device(d);

    helper.save_port(pi);

    //...

    helper.find_all_devices();



    //...


    return 0;
}

#endif
