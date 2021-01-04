#include <cstdlib>

#include "BaloonFactory.h"
#include "ExplodedBaloon.h"
#include "NormalBaloon.h"

BaloonFactory::BaloonFactory()
{
    m_baloons[EXPLODED] = std::make_unique<ExplodedBaloon>(Color{255, 0, 0}, 10);
    m_baloons[NORMAL] = std::make_unique<NormalBaloon>(Color{255, 0, 0});
}

std::unique_ptr<AbstractBaloon> BaloonFactory::get_random_baloon() const
{
    static BaloonType baloons [] {NORMAL, EXPLODED};

    size_t index{std::rand() % m_baloons.size()};

    return m_baloons.at(baloons[index])->clone();
}