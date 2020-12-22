#pragma once

#include <string>
#include <vector>
#include <cstdint>
#include <cstddef>
#include <memory>

class DeviceInfoMemento;

class DeviceInfo { // Originator class
public:
	DeviceInfo(const std::string &name, const std::string &url);		
public:
	DeviceInfo &operator=(const DeviceInfo &d);
	std::string GetName() const { return m_name; }
	std::string GetUrl() const { return m_url; }
	void AddPort(std::uint16_t port);
	//...
	std::size_t size() const { return m_ports.size();}
	std::uint16_t &operator [](std::size_t index);
	std::uint16_t operator [](std::size_t index) const;	
	void Undo();
	void Redo();
public:
	std::shared_ptr<DeviceInfoMemento> CreateMemento();
private:
	std::string m_name, m_url;
	std::vector<std::uint16_t> m_ports;
	struct MementoInfo {
		std::vector<std::shared_ptr<DeviceInfoMemento>> m_mems;
		std::size_t m_current = -1;
	} m_memInfo;
};

