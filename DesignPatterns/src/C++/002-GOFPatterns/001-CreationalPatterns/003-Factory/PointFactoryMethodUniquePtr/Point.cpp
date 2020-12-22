#include "Point.h"

std::unique_ptr<Point> Point::get_cartesian(double x, double y)
{
    return std::unique_ptr<Point>(new Point {x, y});
}
std::unique_ptr<Point> Point::get_polar(double r, double theta)
{
    return std::unique_ptr<Point>(new Point {r, theta, PointInfo::POLAR});
}

