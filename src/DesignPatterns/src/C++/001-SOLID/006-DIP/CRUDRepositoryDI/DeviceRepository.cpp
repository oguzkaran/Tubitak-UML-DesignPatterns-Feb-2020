#include <iostream>
#include "DeviceRepository.h"

using namespace com::bshg::deviceapp::entity;
using namespace com::bshg::deviceapp::repository;
using namespace com::bshg::data::repository;

Device &DeviceRepository::save(com::bshg::deviceapp::entity::Device &t)
{
    std::cout << "save\n";

    return t;
}

MyOptional<Device> DeviceRepository::find_by_id(const int &id)
{
    std::cout << "find_by_id\n";

    return MyOptional<Device>();
}

void DeviceRepository::delete_by_id(const int &id)
{
    std::cout << "delete_by_id\n";
}

std::vector<Device> DeviceRepository::find_by_name(const std::string &name)
{
    return std::vector<Device>();
}
