#include <iostream>
#include <string>
#include <array>
#include <algorithm>

#include "Person.h"
using namespace std;

int main()
{	
	Person p{ "Oğuz", 123 };

	cout << p.GetName() << endl;

	return 0;
}
