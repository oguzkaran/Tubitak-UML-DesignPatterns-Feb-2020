#ifndef WORKER_HPP_
#define WORKER_HPP_

#include "Employee.hpp"

enum Shift {
	Morning, Noon, Evening
};

class Worker : public Employee {
public:
	Worker(const char *name, int no, Shift shift, int hourPerDay, double feePerHour);
	void disp() const override;
	double GetInsurancePayment() const override;
private:
	Shift m_shift;
	int m_hourPerDay;
	double m_feePerHour;
};


#endif //WORKER_HPP_


