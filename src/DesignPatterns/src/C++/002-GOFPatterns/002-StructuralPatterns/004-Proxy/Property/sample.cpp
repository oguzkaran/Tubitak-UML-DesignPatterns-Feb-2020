#include <iostream>
#include <string>
#include "Sample.h"
#include "Property.h"
#include "BoundProperty.h"

using namespace std;

class Person {
public:
	Property<string> name;
};

class Test {
public:
	BoundProperty<int> val{ 0, 20, 30 };
};

#if 1
int main()
{
	Sample s;

	s.x = 10;
	s.y = 4.5;

	cout << s.x * s.x << endl;
	cout << s.y << endl;

	Person p;

	p.name = "oguz";

	cout << p.name << endl;

	Test t;

	t.val = 24;

	cout << t.val << "\n";

	return 0;
}

#endif


