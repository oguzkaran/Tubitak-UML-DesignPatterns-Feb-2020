#pragma once

struct IFax {
    virtual void send() = 0;
    virtual ~IFax() = default;
};
