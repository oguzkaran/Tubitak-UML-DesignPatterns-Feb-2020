#include "Device.h"

int Device::compare_to(const Device &r) const
{
    return m_id - r.m_id;
}
