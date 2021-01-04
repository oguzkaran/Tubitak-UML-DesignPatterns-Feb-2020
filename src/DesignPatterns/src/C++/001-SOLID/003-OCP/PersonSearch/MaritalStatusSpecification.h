#pragma once

#include "Person.h"
#include "ISpecification.h"


class MaritalStatusSpecification : public ISpecification<Person> {
private:
    MaritalStatus m_maritalStatus;
public:
    MaritalStatusSpecification(MaritalStatus maritalStatus) : m_maritalStatus {maritalStatus} {}
public:
    bool is_satisfied(const Person *r)  const override;
};

