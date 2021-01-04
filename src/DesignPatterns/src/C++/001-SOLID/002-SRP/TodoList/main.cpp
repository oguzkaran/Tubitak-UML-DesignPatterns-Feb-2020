#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "TodoInfo.h"
#include "PersistanceManager.h"

using namespace std;

int main()
{
    TodoInfo todoInfo {"market"};

    todoInfo.add_item("patates");
    todoInfo.add_item("domates");
    todoInfo.add_item("simit");

    cout << todoInfo << endl;

    PersistanceManager::save(todoInfo, "todos.txt");

    return 0;
}

#endif
