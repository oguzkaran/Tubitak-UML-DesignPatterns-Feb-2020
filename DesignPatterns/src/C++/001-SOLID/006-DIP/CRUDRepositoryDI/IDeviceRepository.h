#pragma once

#include <vector>
#include <string>
#include "Device.h"
#include "ICrudRepository.h"

namespace com::bshg::deviceapp::repository {
    using com::bshg::deviceapp::entity::Device;
    using com::bshg::data::repository::ICrudRepository;

    struct IDeviceRepository : public ICrudRepository<Device, int> {
        virtual std::vector<Device> find_by_name(const std::string &name) = 0;

        virtual ~IDeviceRepository() = default;
    };
}
