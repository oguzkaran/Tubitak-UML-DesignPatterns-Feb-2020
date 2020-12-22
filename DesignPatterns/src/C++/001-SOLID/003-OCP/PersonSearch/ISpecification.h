#pragma once

template <typename T>
struct ISpecification {
    virtual bool is_satisfied(const T *r) const = 0;
    virtual ~ISpecification() = default;
};
