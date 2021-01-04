#include <cstdio>

#include "DisplayOutput.h"

size_t DisplayOutput::Write(int b)
{
	return fputc(b, stdout);
}


