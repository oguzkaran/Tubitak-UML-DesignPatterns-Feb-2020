#pragma once

#include <string>

struct IPrinter {
    virtual size_t print(const std::string &s) = 0;
    virtual ~IPrinter() = default;
};