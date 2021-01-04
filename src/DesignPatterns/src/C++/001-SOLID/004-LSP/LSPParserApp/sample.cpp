#include <iostream>
#include "Parser.hpp"
#include "StringSource.h"
#include "Filesource.h"

using namespace std;

#if 1
int main()
{
	StringSource ss{ "merhaba iyi \tmisin?" };
	Parser p{ &ss };

	p.DoParse();	

	FileSource fs{ "test.txt" };

	p.SetSource(&fs);

	p.DoParse();
}

#endif
