#include <iostream>

#include "OperationContext.h"
#include "strategyfactory.hpp"

using namespace std;

#if 1

int main()
{
    int a, b;
    std::cout << "Iki sayi giriniz:\n";
    cin >> a >> b;
    auto vec = GetStrategies();
	OperationContext context{a, b};

	for (const auto &s : vec) {
	    context.SetStrategy(*s);
	    std::cout << context.execute() << '\n';
	}

	return 0;
}

#endif
