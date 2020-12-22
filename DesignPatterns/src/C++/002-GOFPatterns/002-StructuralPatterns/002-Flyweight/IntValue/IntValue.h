#ifndef INTVALUE_H_
#define INTVALUE_H_

#include <map>
#include <memory>

class IntValue {
private:
    int m_val;
    static std::map<int, std::shared_ptr<IntValue>> ms_cache;
private:
    IntValue() = default;
    IntValue(int val);
public:
    int get_val() const { return m_val; }
public:
    static std::shared_ptr<IntValue> value_of(int val);
};


#endif //INTVALUE_H_
