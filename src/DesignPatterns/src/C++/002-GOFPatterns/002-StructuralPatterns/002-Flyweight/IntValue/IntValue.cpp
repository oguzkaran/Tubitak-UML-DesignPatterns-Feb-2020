#include "IntValue.h"

std::map<int, std::shared_ptr<IntValue>> IntValue::ms_cache;

IntValue::IntValue(int val) : m_val{} {}

std::shared_ptr<IntValue> IntValue::value_of(int val)
{
    if (val < -128 || val > 127)
        return std::shared_ptr<IntValue>{new IntValue{val}};

    if (ms_cache.find(val) == ms_cache.end())
        ms_cache[val] = std::shared_ptr<IntValue>{new IntValue{val}};

    return ms_cache[val];
}