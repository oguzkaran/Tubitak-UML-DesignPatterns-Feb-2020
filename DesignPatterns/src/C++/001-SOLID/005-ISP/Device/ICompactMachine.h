#pragma once

#include "IPrinter.h"
#include "IScanner.h"
#include "IFax.h"

struct ICompactMachine : public IPrinter, public IScanner, public IFax {
    virtual ~ICompactMachine() = default;
};
