#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "Device.h"
#include "DeviceRepository.h"
#include "DeviceGUIAppService.h"

using namespace std;
using namespace com::bshg::deviceapp::entity;
using namespace com::bshg::deviceapp::repository;

int main()
{
    DeviceRepository dr;
    DeviceGUIAppService gs{&dr};
    Device d{"test", "192.168.2.123"};

    gs.save(d);

    //...

    return 0;
}

#endif
