#include "NormalBaloon.h"

#include <iostream>

std::unique_ptr<AbstractBaloon> NormalBaloon::clone()
{
    return std::make_unique<NormalBaloon>(color());
}

void NormalBaloon::fly()
{
    std::cout << "NormalBaloon fly\n";
}