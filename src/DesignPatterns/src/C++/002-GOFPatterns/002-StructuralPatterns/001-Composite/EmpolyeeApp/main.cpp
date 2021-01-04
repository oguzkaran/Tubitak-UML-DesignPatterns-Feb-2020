#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "Employee.h"
#include "Worker.h"
#include "Manager.h"

using namespace std;

int main()
{
    Employee ceo {"ali", "CEO"};
    Manager cto {"ayse", "CTO", "software", 80000};
    Manager cfo {"guray", "CFO", "account", 80000};
    Worker worker {"selami", "chief", 8, 2.4};

    ceo.add_employee(&cto);
    ceo.add_employee(&cfo);

    //...

    return 0;
}

#endif
