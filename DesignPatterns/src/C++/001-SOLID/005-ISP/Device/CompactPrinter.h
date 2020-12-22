#pragma once

#include "IPrinter.h"
#include "IScanner.h"
#include "IFax.h"
#include "ICompactMachine.h"

class CompactPrinter : public  ICompactMachine/*, public IPrinter,  public IScanner, public IFax*/ {
public:
    void send() override;
    size_t print(const std::string &s) override;
    size_t scan() override;
};


