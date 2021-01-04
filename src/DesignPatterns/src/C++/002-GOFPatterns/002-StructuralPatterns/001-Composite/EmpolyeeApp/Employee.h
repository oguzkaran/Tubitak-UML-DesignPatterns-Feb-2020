#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>
#include <vector>

class Employee {
public:
    Employee() = default;
    Employee(const char *name, const char *title) : m_name{name}, m_title {title} {}
public:
    void add_employee(Employee *e)
    {
        //...
        m_emplyees.push_back(e);
    }
private:
    std::string m_name;
    std::string m_title;
    std::vector<Employee *> m_emplyees;
};


#endif // EMPLOYEE_H_
