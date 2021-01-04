#ifndef DEVICEREPOSITORY_H_
#define DEVICEREPOSITORY_H_

#include "ICrudRepository.h"
#include "Device.h"

class DeviceRepository : public ICrudRepository<Device, int> { //senaryoya göre singleton yapılabilir
public:
    Device &save(Device &t) override;

    std::deque<Device> find_all() override;

    bool exist_by_id(const int &id) override;
};


#endif //DEVICEREPOSITORY_H_
