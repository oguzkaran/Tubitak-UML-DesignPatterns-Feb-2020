#ifndef NORMALBALOON_H_
#define NORMALBALOON_H_

#include <cstdint>
#include "AbstractBaloon.h"

class NormalBaloon : public AbstractBaloon {
public:
    using AbstractBaloon::AbstractBaloon;
public:
    std::unique_ptr<AbstractBaloon> clone() override;
    void fly() override;
};


#endif //NORMALBALOON_H_
