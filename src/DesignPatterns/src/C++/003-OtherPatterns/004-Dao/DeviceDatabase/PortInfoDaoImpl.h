#pragma once

#include "IDao.h"
#include "PortInfo.h"

class PortInfoDaoImpl : public IDao<PortInfo> {
public:
	bool Insert(PortInfo &p) override;
	std::deque<PortInfo> GetAll() override;
	std::deque<PortInfo> GetPorts(std::size_t n);
	bool Update(PortInfo &p) override;
	bool Delete(PortInfo &p) override;
	bool DeletePortById(int portId);

	//...
};

