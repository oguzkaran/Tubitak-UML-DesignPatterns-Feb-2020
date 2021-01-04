#pragma once

#include <iostream>
#include <string>

#include "IComparable.h"

class Device : public IComparable<Device> {
    friend std::ostream &operator <<(std::ostream &os, const Device &r)
    {
        os << r.m_name << ", " << r.m_host;

        return os;
    }
private:
    int m_id;
    std::string m_name;
    std::string m_host;
public:
    Device(int id, const std::string &name, const std::string &host)
            : m_id{id}, m_name{name}, m_host{host} {}
public:
    int get_id() const
    {
        return m_id;
    }

    void set_id(int mId)
    {
        m_id = mId;
    }

    const std::string &get_name() const
    {
        return m_name;
    }

    void set_name(const std::string &mName)
    {
        m_name = mName;
    }

    const std::string &get_host() const
    {
        return m_host;
    }

    void set_host(const std::string &mHost)
    {
        m_host = mHost;
    }

public:
    int compare_to(const Device &r) const override;
};

