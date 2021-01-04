#include "Point.h"


Point Point::create_from_cartesian(double x, double y)
{
    return Point {x, y};
}
Point Point::create_from_polar(double r, double theta)
{
    return Point {r, theta, PointInfo::POLAR};

}

