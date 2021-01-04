#pragma once
class PortInfo {
public:
	PortInfo(int id, int no, int deviceId = 0) : m_id{ id }, m_no{ no }, m_deviceId{ deviceId }
	{}
	int GetId() const { return m_id; }
	int GetNo() const { return m_no; }
	int GetDeviceId() const { return m_deviceId; }
	//...
private:
	int m_id;	
	int m_no;
	int m_deviceId;
};

