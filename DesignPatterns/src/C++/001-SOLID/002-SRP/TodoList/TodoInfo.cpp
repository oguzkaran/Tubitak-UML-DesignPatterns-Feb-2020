#include "TodoInfo.h"

std::ostream &operator <<(std::ostream &os, const TodoInfo &r)
{
    os << r.m_title << "\n";

    for (const auto &item : r.m_items)
        os << item << "\n";

    return os;
}


void TodoInfo::add_item(const std::string &r)
{
    static int id = 1;

    m_items.push_back(std::to_string(id) + "-" + r);
    ++id;
}