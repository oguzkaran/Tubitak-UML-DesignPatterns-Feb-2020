#pragma once

#include "IPrinter.h"

class Printer3D : public IPrinter {
public:
    size_t print(const std::string &s) override;
};

