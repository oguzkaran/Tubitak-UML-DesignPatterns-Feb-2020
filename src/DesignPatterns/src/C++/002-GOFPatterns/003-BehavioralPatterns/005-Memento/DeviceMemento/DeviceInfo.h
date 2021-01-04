#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <cstddef>
#include <memory>

class DeviceInfoMemento;

class DeviceInfo { // Originator class
private:
    std::string m_name, m_url;
    std::vector<std::uint16_t> m_ports;
public:
    DeviceInfo(const char *name, const char *url)
            : m_name{ name }, m_url{ url }
    {}

	DeviceInfo(const std::string &name, const std::string &url) 
		: DeviceInfo{name.data(), url.data()}
	{}
public:
	[[nodiscard]] std::string GetName() const { return m_name; }
	[[nodiscard]] std::string GetUrl() const { return m_url; }
	void AddPort(std::uint16_t port);
	//...
	[[nodiscard]] size_t size() const { return m_ports.size();}
	std::uint16_t &operator [](size_t index);
	std::uint16_t operator [](size_t index) const;
public:
	std::shared_ptr<DeviceInfoMemento> CreateMemento();
};

