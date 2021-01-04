#ifndef TEMPERATUREAPPDAL_H_
#define TEMPERATUREAPPDAL_H_

#include <exception>
#include <string>

class TemperatureAppDAL {
private:
    static std::string m_url;
public:
    TemperatureAppDAL(const std::string &url = "");
public:
    std::string &url() { return m_url;}
    const std::string &url() const { return m_url;}
};


#endif //TEMPERATUREAPPDAL_H_
