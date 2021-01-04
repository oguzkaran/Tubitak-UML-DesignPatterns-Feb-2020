#pragma once

#include "Device.h"
#include "IDeviceRepository.h"

using com::bshg::deviceapp::repository::IDeviceRepository;
using com::bshg::deviceapp::entity::Device;

class DeviceGUIAppService {
private:
    IDeviceRepository *m_repository;
public:
    DeviceGUIAppService(IDeviceRepository *repository) : m_repository{repository} {}
public:
    void set_repository(IDeviceRepository *repository)
    {
        m_repository = repository;
    }
    Device &save(Device &t)
    {
        //...
        return m_repository->save(t);
    }
};

