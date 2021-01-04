#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "Person.h"
#include "PersonFilter.h"
#include "MaritalStatusSpecification.h"
#include "AndSpecification.h"
#include "GenderSpecification.h"

using namespace std;

int main()
{
    auto p1 = Person {"ali", MaritalStatus::Married, Gender::Male};
    auto p2 = Person {"ayse", MaritalStatus::Married, Gender::Female};
    auto p3 = Person {"oguz", MaritalStatus::Single, Gender::Male};

    vector<Person *> vec {&p1, &p2, &p3};

    PersonFilter pf;
    MaritalStatusSpecification ms{MaritalStatus::Married};

    auto marrieds = pf.filter(vec, ms);

    for_each(marrieds.begin(), marrieds.end(), [](auto p) {std::cout << p->get_name() << endl;});

    cout << "*******************\n";

    GenderSpecification g{Gender::Female};
    AndSpecification<Person> as{ms, g};

    auto marriedAndFemale = pf.filter(vec, as);

    for_each(begin(marriedAndFemale), end(marriedAndFemale), [](auto p) {std::cout << p->get_name() << endl;});

    return 0;
}

#endif
