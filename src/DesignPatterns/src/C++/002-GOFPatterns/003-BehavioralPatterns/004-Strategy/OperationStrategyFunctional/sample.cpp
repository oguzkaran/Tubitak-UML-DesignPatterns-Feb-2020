#include <iostream>
#include "OperationContext.h"

using namespace std;

#if 1
int main()
{
	OperationContext context{ 10, 20, [] (auto a, auto b) {return a + b;} };

	cout << context.execute() << endl;

	std::cout << "Bir sayi giriniz:\n";
	int val;

	std::cin >> val;

	context.SetStrategy([val] (auto a, auto b) {return a + b + val;});

	cout << context.execute() << endl;

	context.SetStrategy([] (auto a, auto b) {return a * b; });

    cout << context.execute() << endl;

	return 0;
}

#endif
