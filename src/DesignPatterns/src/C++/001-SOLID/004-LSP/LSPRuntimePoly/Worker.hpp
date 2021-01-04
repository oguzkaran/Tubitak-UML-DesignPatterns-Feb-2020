#ifndef WORKER_HPP_
#define WORKER_HPP

#include "Employee.hpp"

enum Shift {
	Morning, Noon, Evening
};

class Worker : public Employee {
public:
	Worker(const char *name, int no, Shift shift);
	void disp() const override;
private:
	Shift m_shift;
};


#endif


