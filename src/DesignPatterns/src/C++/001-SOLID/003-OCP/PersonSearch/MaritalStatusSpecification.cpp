

#include "MaritalStatusSpecification.h"

bool MaritalStatusSpecification::is_satisfied(const Person *r) const
{
    return r->get_marital_status() == m_maritalStatus;
}
