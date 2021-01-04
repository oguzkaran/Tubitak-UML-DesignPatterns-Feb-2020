#include "PointFactory.h"

Point PointFactory::get_cartesian(double x, double y)
{
    ++m_number_of_points;
    return Point{x, y};
}

Point PointFactory::get_polar(double r, double theta)
{
    ++m_number_of_points;
    return Point {r, theta, PointInfo::POLAR};
}