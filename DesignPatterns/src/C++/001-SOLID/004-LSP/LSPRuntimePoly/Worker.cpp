#include <iostream>
#include "Worker.hpp"

using namespace std;

Worker::Worker(const char *name, int no, Shift shift) : Employee{ name, no }
{
	m_shift = shift;
}

void Worker::disp() const
{
	const char *shifts[]{ "Morning", "Noon", "Evening" };

	Employee::disp();
	cout << shifts[m_shift] << endl;
}
