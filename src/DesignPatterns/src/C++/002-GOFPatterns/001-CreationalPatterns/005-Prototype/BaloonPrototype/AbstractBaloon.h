//
// Created by Karans on 1/30/2020.
//

#ifndef BALOON_H_
#define BALOON_H_

#include <climits>
#include "Color.h"
#include "ICloneable.h"

class AbstractBaloon : public ICloneable<AbstractBaloon> {
public:
    explicit AbstractBaloon(const Color &color) : m_color {color} {}
    ~AbstractBaloon() override = default;
public:
    Color &color() {return m_color;}
    const Color &color() const {return m_color;}
public:
    std::unique_ptr<AbstractBaloon> clone() override = 0;
    virtual void fly() = 0;
private:
    Color m_color;
    //...
};
#endif //BALOON_H_
