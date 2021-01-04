#ifndef MANAGER_H_
#define MANAGER_H_

#include "Employee.h"

class Manager : public Employee {
private:
    std::string m_department;
    double m_salary;
public:
    using Employee::Employee;
    Manager(const char *name, const char *title, const char * department, double salary)
        : Employee {name, title}, m_salary {salary}, m_department {department}
    {}
};


#endif //MANAGER_H_
