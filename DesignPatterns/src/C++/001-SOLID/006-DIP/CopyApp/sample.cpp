#include <iostream>
#include "FileInput.h"
#include "DisplayOutput.h"
#include "util.hpp"

using namespace std;

#if 1
int main()
{
	FileInput in{ "test.txt" };
	DisplayOutput out;

	Copy(in, out, 8);

	return 0;
}

#endif
