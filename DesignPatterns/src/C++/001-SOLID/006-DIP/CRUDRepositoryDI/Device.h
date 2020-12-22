#pragma once

#include <string>

namespace com::bshg::deviceapp::entity {
    class Device {
    private:
        int m_id;
        std::string m_name;
        std::string m_host;
    public:
        Device(int id, const char *name, const char *host) : m_id{id}, m_name{name}, m_host{host} {}
        Device(const char *name, const char *host) : Device{0, name, host} {}
        Device(int id, const std::string &name, const std::string &host) : Device{id, name.data(), host.data()} {}
    public:

    };
}

