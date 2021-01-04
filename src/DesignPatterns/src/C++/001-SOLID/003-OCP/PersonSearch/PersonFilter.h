#pragma once

#include "IFilter.h"
#include "Person.h"

struct PersonFilter : public IFilter<Person> {
    std::vector<Person *> filter(const std::vector<Person *> &vec, const ISpecification<Person> &spec) override;
};