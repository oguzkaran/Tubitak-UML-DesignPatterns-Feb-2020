#ifndef TEMPERATUREAPPDAL_H_
#define TEMPERATUREAPPDAL_H_

#include <exception>
#include <string>
#include <utility>

class TemperatureAppDAL {
private:
    std::string m_url;
private:
    explicit TemperatureAppDAL(std::string url = "") : m_url{std::move(url)} {}
public:
    TemperatureAppDAL(const TemperatureAppDAL &) = delete;
    TemperatureAppDAL &operator =(const TemperatureAppDAL &) = delete;
    TemperatureAppDAL(TemperatureAppDAL &&) = delete;
    TemperatureAppDAL &operator =(TemperatureAppDAL &&) = delete;
public:
    std::string &url() { return m_url;}
    const std::string &url() const { return m_url;}

public:
    static TemperatureAppDAL &get_instance();
};



inline TemperatureAppDAL &TemperatureAppDAL::get_instance()
{
    static TemperatureAppDAL instance;

    return instance;
}

#endif //TEMPERATUREAPPDAL_H_
