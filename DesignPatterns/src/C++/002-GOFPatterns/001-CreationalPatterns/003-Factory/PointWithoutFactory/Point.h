#ifndef POINT_H_
#define POINT_H_

#include <string>
#include <cmath>

//r, theta -> x = r * cos(theta), y = r * sin(theta)

enum class PointInfo {CARTESIAN, POLAR};

struct Point {
private:
    PointInfo m_point_info;
public:
    double x, y;
public:
    Point(double x = 0, double y = 0, const PointInfo &coordinates = PointInfo::CARTESIAN) : m_point_info{coordinates}
    {
        if (m_point_info == PointInfo::POLAR) {
            this->x = x * std::cos(y);
            this->y = x * std::sin(y);
        }
        else {
            this->x = x;
            this->y = y;
        }
    }
public:
    std::string to_string() const {return "(" + std::to_string(x) + "," + std::to_string(y) + ")";}
};

#endif //POINT_H_
