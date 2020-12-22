#ifndef DEVICESAPPHELPER_H_
#define DEVICESAPPHELPER_H_

#include <vector>
#include "DeviceRepository.h"
#include "PortInfo.h"
#include "PortInfoRepository.h"

class DevicesAppHelper {
private:
    DeviceRepository m_device_repositoery;
    PortInfoRepository m_port_info_repository;
public:
    Device &save_device(Device &device);
    std::deque<Device> find_all_devices();
    bool exist_device_by_id(int id);

    PortInfo &save_port(PortInfo &port_info);
    std::vector<PortInfo>  find_all_ports();
    bool exist_port_by_id(long id);
};


#endif //DEVICESAPPHELPER_H_
