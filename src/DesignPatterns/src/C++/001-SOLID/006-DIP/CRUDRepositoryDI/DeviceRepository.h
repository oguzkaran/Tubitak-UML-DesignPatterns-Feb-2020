#pragma once

#include "ICrudRepository.h"
#include "Device.h"
#include "IDeviceRepository.h"

namespace com::bshg::deviceapp::repository {
    using com::bshg::data::repository::ICrudRepository;
    using com::bshg::deviceapp::entity::Device;

    struct DeviceRepository : public IDeviceRepository {
        Device &save(Device &t) override;

        data::repository::MyOptional<Device> find_by_id(const int &id) override;

        void delete_by_id(const int &id) override;

        std::vector<Device> find_by_name(const std::string &name) override;
    };
}

