#ifndef POINTFACTORY_H_
#define POINTFACTORY_H_

#include <cstddef>

#include "Point.h"

class PointFactory {
private:
    std::size_t m_number_of_points;
public:
    PointFactory() :m_number_of_points {0} {}
    size_t get_number_of_points() const { return m_number_of_points; }
public:
    Point get_cartesian(double x, double y);
    Point get_polar(double r, double theta);
};


#endif //POINTFACTORY_H_
