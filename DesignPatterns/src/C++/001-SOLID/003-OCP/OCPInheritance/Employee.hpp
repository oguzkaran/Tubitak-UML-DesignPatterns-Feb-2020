#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include <string>

class Employee {
public:
	Employee(const char *name, int no);
	virtual void disp() const;
	//...

	virtual double GetInsurancePayment() const = 0;
	virtual ~Employee() = default;
private:
	std::string m_name;
	int m_no;
};

#endif
