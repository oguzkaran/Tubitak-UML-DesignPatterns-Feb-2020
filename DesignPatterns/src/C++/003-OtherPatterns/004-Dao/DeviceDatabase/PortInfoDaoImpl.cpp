#include <deque>
#include <iostream>
#include "PortInfoDaoImpl.h"

using namespace std;

bool PortInfoDaoImpl::Insert(PortInfo &p)
{
	cout << "Insert PortInfo" << endl;

	return true;
}

deque<PortInfo> PortInfoDaoImpl::GetAll()
{
	cout << "GetAll PortInfo" << endl;

	return deque<PortInfo>();
}

deque<PortInfo> PortInfoDaoImpl::GetPorts(size_t n)
{
	cout << "GetPorts" << endl;

	return  deque<PortInfo>();
}

bool PortInfoDaoImpl::Update(PortInfo &p)
{
	cout << "Update PortInfo" << endl;

	return true;
}

bool PortInfoDaoImpl::Delete(PortInfo &p)
{
	cout << "Delete PortInfo" << endl;

	return DeletePortById(p.GetId());
}

bool PortInfoDaoImpl::DeletePortById(int portId)
{
	cout << "DeletePortById PortInfo" << endl;

	return true;
}