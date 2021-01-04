
#ifndef POINT_H_
#define POINT_H_

#include <string>
#include <cmath>

//r, theta -> x = r * cos(theta), y = r * sin(theta)

struct Point {
private:
    enum class PointInfo {CARTESIAN, POLAR};
private:
    Point(double x = 0, double y = 0, const PointInfo &point_info = PointInfo::CARTESIAN)
    {
        if (point_info == PointInfo::POLAR) {
            this->x = x * std::cos(y);
            this->y = x * std::sin(y);
        }
        else {
            this->x = x;
            this->y = y;
        }
    }
public:
    double x, y;
public:
    static Point create_from_cartesian(double x, double y);
    static Point create_from_polar(double r, double theta);
public:
    std::string to_string() const {return "(" + std::to_string(x) + "," + std::to_string(y) + ")";}
};

#endif //POINT_H_
