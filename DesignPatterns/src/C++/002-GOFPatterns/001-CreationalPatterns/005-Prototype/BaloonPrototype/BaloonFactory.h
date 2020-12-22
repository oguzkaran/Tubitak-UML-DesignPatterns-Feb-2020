#ifndef BALOONFACTORY_H_
#define BALOONFACTORY_H_

#include <map>
#include <memory>

#include "AbstractBaloon.h"

enum BaloonType {NORMAL, EXPLODED};

class BaloonFactory {
private:
    std::map<BaloonType, std::unique_ptr<AbstractBaloon>> m_baloons;
public:
    BaloonFactory();
    std::unique_ptr<AbstractBaloon> get_random_baloon() const;
};


#endif //BALOONFACTORY_H_
