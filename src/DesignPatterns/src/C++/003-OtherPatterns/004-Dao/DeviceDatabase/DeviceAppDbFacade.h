#pragma once

#include <vector>
#include "DeviceInfo.h"
#include "PortInfo.h"
#include "PortInfoDaoImpl.h"

class DeviceAppDbFacade {	
public:
	bool InsertDevice(DeviceInfo &d);
	std::vector<DeviceInfo> GetDevices();
	std::vector<DeviceInfo> GetDevices(std::size_t n);
	bool UpdateDevice(DeviceInfo &d);
	bool DeleteDevice(DeviceInfo &d);
	bool DeleteDeviceById(int deviceId);

	bool InsertPort(PortInfo &d);
	std::deque<PortInfo> GetPorts();
	std::deque<PortInfo> GetPorts(std::size_t n);
	bool UpdatePort(PortInfo &d);	
	bool DeletePortById(int portId);
	//...
private:
	PortInfoDaoImpl m_portInfoDao;
};

