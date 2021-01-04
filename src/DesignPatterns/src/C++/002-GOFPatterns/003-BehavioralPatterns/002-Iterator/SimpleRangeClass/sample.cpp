#include <iostream>
#include <algorithm>
#include "IntRange.h"

using namespace std;

#if 1
int main()
{
	IntRange r{ 10, 20 };

	for_each(r.begin(), r.end(), [](auto val) {std::cout << val << " ";});

	cout << "\n";

	for (auto iter{ r.begin() }; iter != r.end(); ++iter)
		cout << *iter << " ";

	cout << "\n";

	return 0;
}

#endif
