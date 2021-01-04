#ifndef WORKER_H_
#define WORKER_H_

#include "Employee.h"

class Worker : public Employee{
private:
    int m_hours_per_day;
    double m_fee_per_hour;
public:
    using Employee::Employee;

    Worker(const char *name, const char *title, int hours_per_day, double fee_per_hour)
            : Employee{name, title}, m_fee_per_hour {fee_per_hour}, m_hours_per_day {hours_per_day} {}

};


#endif //WORKER_H_
