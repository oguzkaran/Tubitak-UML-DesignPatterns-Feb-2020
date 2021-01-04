#include "ExplodedBaloon.h"

#include <iostream>

std::unique_ptr<AbstractBaloon> ExplodedBaloon::clone()
{
    return std::make_unique<ExplodedBaloon>(color(), m_magnitude);
}

void ExplodedBaloon::fly()
{
    std::cout << "ExplodedBaloon fly\n";
}