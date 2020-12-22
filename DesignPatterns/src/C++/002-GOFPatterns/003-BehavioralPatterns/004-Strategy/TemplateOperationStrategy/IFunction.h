#pragma once

template <typename T, typename U, typename R>
struct IFunction {
    virtual R DoOperation(const T &t, const U &u) = 0;
    virtual ~IFunction() = default;
};


