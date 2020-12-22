#include <iostream>
#include "Printer3D.h"

std::size_t Printer3D::print(const std::string &s)
{
    std::cout << s << std::endl;

    return s.size();
}