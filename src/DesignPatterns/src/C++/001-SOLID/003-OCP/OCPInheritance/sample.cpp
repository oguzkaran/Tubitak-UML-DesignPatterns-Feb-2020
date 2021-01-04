#include <iostream>
#include "Worker.hpp"

using namespace std;

void PayInsurance(Employee &e)
{
    e.disp();
    cout << "Payment:" << e.GetInsurancePayment() << endl;
}

#if 1
int main()
{
	Worker w{ "Lokman", 1, Shift::Morning, 8, 67};

	w.disp();

	PayInsurance(w);
}

#endif
