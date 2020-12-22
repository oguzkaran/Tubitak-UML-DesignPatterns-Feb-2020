#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
	Person p{ "Oguz" };

	cout << p.GetName() << endl;

	return 0;
}


