#ifndef EXPLODEDBALOON_H_
#define EXPLODEDBALOON_H_

#include <cstdint>
#include "AbstractBaloon.h"

class ExplodedBaloon : public AbstractBaloon {
private:
    std::uint32_t m_magnitude;
public:
    ExplodedBaloon(const Color &color, std::uint32_t magnitude) : AbstractBaloon{color}, m_magnitude{magnitude} {}
    std::uint32_t &magnitude() { return m_magnitude;}
    const std::uint32_t &magnitude() const { return m_magnitude;}
public:
    std::unique_ptr<AbstractBaloon> clone() override;
    void fly() override;
};


#endif //EXPLODEDBALOON_H_
