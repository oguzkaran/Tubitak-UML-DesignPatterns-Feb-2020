#include "PersonFilter.h"

std::vector<Person *> PersonFilter::filter(const std::vector<Person *> &vec, const ISpecification<Person> &spec)
{
    std::vector<Person *> result;

    for (auto p : vec)
        if (spec.is_satisfied(p))
            result.push_back(p);

    return result;
}

