#define DLLEXPORT
#include "operation.h"

DLLSPEC int add(int a, int b)
{
    return a + b;
}

DLLSPEC int multiply(int a, int b)
{
    return a * b;
}