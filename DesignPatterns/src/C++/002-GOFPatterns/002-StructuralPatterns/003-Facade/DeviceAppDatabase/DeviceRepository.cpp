#include <iostream>

#include "DeviceRepository.h"

Device &DeviceRepository::save(Device &t)
{
    std::cout << "DeviceRepository::save\n";

    return t;
}

std::deque<Device> DeviceRepository::find_all()
{
    std::cout << "DeviceRepository::find_all\n";

    return std::deque<Device>();
}

bool DeviceRepository::exist_by_id(const int &id)
{
    std::cout << "DeviceRepository::exist_by_id\n";

    return false;
}
