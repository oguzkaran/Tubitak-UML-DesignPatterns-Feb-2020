#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "IPrinter.h"
#include "Printer3D.h"
#include "CompactPrinter.h"

using namespace std;

int main()
{
    Printer3D p;
    CompactPrinter cp;

    p.print("Merhaba");
    cp.send();
    cp.print("Merhaba");

    //...

    return 0;
}

#endif
