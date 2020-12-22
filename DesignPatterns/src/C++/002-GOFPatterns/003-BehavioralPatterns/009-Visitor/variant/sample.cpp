#include <iostream>
#include <string>
#include <variant>

using namespace std;

class MyVariantVisitor {
public:
	void operator()(int val)
	{
		cout << "int:" << val << endl;
	}

	void operator()(const string &s)
	{
		cout << "string:" << s << endl;
	}

	void operator()(double val)
	{
		cout << "double:" << val << endl;
	}
};

#if 1
int main()
{
	MyVariantVisitor visitor;
	variant<int, string, double> v;

	v = 10;
	visit(visitor, v);

	v = 4.5;

	visit(visitor, v);

	v = "ankara";

	visit(visitor, v);
	
	return 0;
}

#endif
