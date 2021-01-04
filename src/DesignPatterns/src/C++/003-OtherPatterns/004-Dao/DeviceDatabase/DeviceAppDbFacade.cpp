#include <iostream>

#include "DeviceAppDbFacade.h"

using namespace std;

bool DeviceAppDbFacade::InsertDevice(DeviceInfo &d)
{
	cout << "InsertDevice" << endl;
	return true;
}

vector<DeviceInfo> DeviceAppDbFacade::GetDevices()
{
	vector<DeviceInfo> vec;
	cout << "GetDevices()" << endl;

	return std::move(vec);
}
vector<DeviceInfo> DeviceAppDbFacade::GetDevices(size_t n)
{
	cout << "GetDevices(size_t)" << endl;

	return vector<DeviceInfo>{};
}
bool DeviceAppDbFacade::UpdateDevice(DeviceInfo &d)
{
	cout << "UpdateDevice" << endl;

	return true;
}
bool DeviceAppDbFacade::DeleteDevice(DeviceInfo &d)
{
	cout << "DeleteDevice" << endl;

	return true;
}

bool DeviceAppDbFacade::DeleteDeviceById(int deviceId)
{
	cout << "DeleteDevice" << endl;

	return true;
}

bool DeviceAppDbFacade::InsertPort(PortInfo &d)
{
	return m_portInfoDao.Insert(d);
}

deque<PortInfo> DeviceAppDbFacade::GetPorts()
{
	return m_portInfoDao.GetAll();
}

deque<PortInfo> DeviceAppDbFacade::GetPorts(size_t n)
{
	return m_portInfoDao.GetPorts(n);
}

bool DeviceAppDbFacade::UpdatePort(PortInfo &d)
{
	return m_portInfoDao.Update(d);
}
bool DeviceAppDbFacade::DeletePortById(int portId)
{
	cout << "DeviceAppDbFacade::DeletePortById" << endl;

	return m_portInfoDao.DeletePortById(portId);
}