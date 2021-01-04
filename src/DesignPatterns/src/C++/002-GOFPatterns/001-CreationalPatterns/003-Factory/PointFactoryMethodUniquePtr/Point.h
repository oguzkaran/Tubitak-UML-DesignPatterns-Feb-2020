
#ifndef POINT_H_
#define POINT_H_

#include <string>
#include <memory>
#include <cmath>

//r, theta -> x = r * cos(theta), y = r * sin(theta)

struct Point {
private:
    enum PointInfo {CARTESIAN, POLAR};
private:
    Point(double x = 0, double y = 0, const PointInfo &point_info = CARTESIAN)
    {
        if (point_info == POLAR) {
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
    static std::unique_ptr<Point> get_cartesian(double x, double y);
    static std::unique_ptr<Point> get_polar(double r, double theta);
public:
    std::string to_string() const {return "(" + std::to_string(x) + "," + std::to_string(y) + ")";}
};

#endif //POINT_H_
