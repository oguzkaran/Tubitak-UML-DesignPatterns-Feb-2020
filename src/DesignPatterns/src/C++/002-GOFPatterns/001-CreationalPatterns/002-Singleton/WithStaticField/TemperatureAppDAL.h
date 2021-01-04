#ifndef TEMPERATUREAPPDAL_H_
#define TEMPERATUREAPPDAL_H_

#include <exception>
#include <string>


class TemperatureAppDAL {
private:
    static TemperatureAppDAL ms_instance;
private:
    std::string m_url;
    TemperatureAppDAL(const std::string &url = "") : m_url{url} {}
public:
    TemperatureAppDAL(const TemperatureAppDAL &) = delete;
    TemperatureAppDAL &operator =(const TemperatureAppDAL &) = delete;
    TemperatureAppDAL(TemperatureAppDAL &&) = delete;
    TemperatureAppDAL &operator =(TemperatureAppDAL &&) = delete;
public:
    std::string &url() { return m_url;} //Singleton' la ilgili değil
    const std::string &url() const { return m_url;}

public:
    static TemperatureAppDAL &get_instance();
    static TemperatureAppDAL &get_instance(const char *url);
    static TemperatureAppDAL &get_instance(const std::string &url);
};





#endif //TEMPERATUREAPPDAL_H_
