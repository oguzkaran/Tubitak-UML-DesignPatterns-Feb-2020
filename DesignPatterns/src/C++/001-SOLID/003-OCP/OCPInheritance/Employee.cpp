#include <iostream>
#include "Employee.hpp"

using namespace std;

Employee::Employee(const char *name, int no) : m_name{ name }, m_no{ no }
{}

void Employee::disp() const
{
	cout << m_name << ", " << m_no << endl;
}
