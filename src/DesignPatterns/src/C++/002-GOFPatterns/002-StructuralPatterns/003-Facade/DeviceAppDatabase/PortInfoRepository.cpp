#include <iostream>
#include "PortInfoRepository.h"

PortInfo &PortInfoRepository::save(PortInfo &t)
{
    std::cout << "PortInfoRepository::save\n";
    return t;
}

std::vector<PortInfo> PortInfoRepository::find_all()
{
    std::cout << "PortInfoRepository::find_all\n";

    return std::vector<PortInfo>();
}

bool PortInfoRepository::exist_by_id(const long &id)
{
    std::cout << "PortInfoRepository::exist_by_id\n";

    return false;
}
