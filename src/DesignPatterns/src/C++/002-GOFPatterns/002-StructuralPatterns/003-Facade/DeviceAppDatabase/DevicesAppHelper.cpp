#include <iostream>
#include "DevicesAppHelper.h"

Device &DevicesAppHelper::save_device(Device &device)
{
    return m_device_repositoery.save(device);
}
std::deque<Device> DevicesAppHelper::find_all_devices()
{
    return m_device_repositoery.find_all();
}

bool DevicesAppHelper::exist_device_by_id(int id)
{
    return m_device_repositoery.exist_by_id(id);
}

PortInfo &DevicesAppHelper::save_port(PortInfo &port_info)
{
    return m_port_info_repository.save(port_info);
}
std::vector<PortInfo>  DevicesAppHelper::find_all_ports()
{
    return m_port_info_repository.find_all();
}
bool DevicesAppHelper::exist_port_by_id(long id)
{
    return m_port_info_repository.exist_by_id(id);
}
