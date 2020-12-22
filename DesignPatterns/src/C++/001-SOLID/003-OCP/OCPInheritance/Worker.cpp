#include <iostream>
#include "Worker.hpp"

using namespace std;

Worker::Worker(const char *name, int no, Shift shift, int hourPerDay, double feePerHour)
    : Employee{ name, no }, m_shift {shift}, m_feePerHour{feePerHour}, m_hourPerDay {hourPerDay}
{}

void Worker::disp() const
{
	const char *shifts[]{ "Morning", "Noon", "Evenning" };

	Employee::disp();
	cout << shifts[m_shift] << endl;
}

double Worker::GetInsurancePayment() const
{
    return m_feePerHour * m_hourPerDay * 30;
}
