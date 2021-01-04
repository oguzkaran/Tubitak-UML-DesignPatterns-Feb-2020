#pragma once

#include "ISpecification.h"
#include "Person.h"

class GenderSpecification : public ISpecification<Person> {
private:
    Gender m_gender;
public:
    GenderSpecification(Gender gender) : m_gender{gender} {}
public:
    bool is_satisfied(const Person *r) const override;
};

