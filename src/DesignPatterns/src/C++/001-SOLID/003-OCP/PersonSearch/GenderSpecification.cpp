#include "GenderSpecification.h"

bool GenderSpecification::is_satisfied(const Person *r) const
{
    return r->get_gender() == m_gender;
}
