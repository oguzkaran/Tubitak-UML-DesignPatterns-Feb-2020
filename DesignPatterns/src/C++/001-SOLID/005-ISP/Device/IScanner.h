#pragma once

#include <string>

struct IScanner {
    virtual size_t scan() = 0;
    virtual ~IScanner() = default;
};