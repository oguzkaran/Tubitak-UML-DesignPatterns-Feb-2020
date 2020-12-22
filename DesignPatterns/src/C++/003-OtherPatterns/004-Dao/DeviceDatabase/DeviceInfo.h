#pragma once

#include <string>

class DeviceInfo {
public:
	DeviceInfo(int id, const std::string &name) : m_id{ id }, m_name{ name }
	{}
	//...
	int GetId() const { return m_id; }
	std::string GetName() const { return m_name; }
private:
	int m_id;
	std::string m_name;
};
