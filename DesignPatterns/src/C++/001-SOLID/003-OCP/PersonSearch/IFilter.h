#pragma once

#include <vector>
#include "ISpecification.h"

template <typename T>
struct IFilter {
    virtual std::vector<T *> filter(const std::vector<T *> &vec, const ISpecification<T> &spec) = 0;
    virtual ~IFilter() = default;
};


