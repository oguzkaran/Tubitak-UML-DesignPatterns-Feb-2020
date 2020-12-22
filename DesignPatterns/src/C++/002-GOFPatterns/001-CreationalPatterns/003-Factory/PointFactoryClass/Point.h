
#ifndef POINT_H_
#define POINT_H_

#include <string>
#include <cmath>

enum PointInfo {CARTESIAN, POLAR};

class Point final {
    friend class PointFactory;
private:
    double x, y;
private:
    explicit Point(double x = 0, double y = 0, const PointInfo &point_info = CARTESIAN)
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
    std::string to_string() const {return "(" + std::to_string(x) + "," + std::to_string(y) + ")";}
};

#endif //POINT_H_
