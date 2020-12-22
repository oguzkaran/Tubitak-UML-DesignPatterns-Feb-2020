#ifndef SAMPLE_DEVICE_H
#define SAMPLE_DEVICE_H

#include <vector>
#include <string>
#include <cstdint>

class Device {
private:
    std::uint64_t m_id;
    std::string m_name;
    std::vector<int> m_ports;
    //...
};


#endif //SAMPLE_DEVICE_H
