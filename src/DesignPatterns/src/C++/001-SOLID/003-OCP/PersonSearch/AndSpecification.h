#pragma once

#include "ISpecification.h"

template <typename T>
class AndSpecification : public ISpecification<T> {
private:
    ISpecification<T> &m_first, &m_second;
public:
    AndSpecification(ISpecification<T> &first, ISpecification<T> &second)
        : m_first{first}, m_second{second} {}
public:
    bool is_satisfied(const T *r) const override;
};

template <typename T>
bool AndSpecification<T>::is_satisfied(const T *r) const
{
    return m_first.is_satisfied(r) && m_second.is_satisfied(r);
}