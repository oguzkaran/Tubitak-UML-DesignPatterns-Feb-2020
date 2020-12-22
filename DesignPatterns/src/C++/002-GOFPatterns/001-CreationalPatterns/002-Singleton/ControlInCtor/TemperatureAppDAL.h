#ifndef TEMPERATUREAPPDAL_H_
#define TEMPERATUREAPPDAL_H_

#include <exception>
#include <string>

class TemperatureAppDAL {
private:
    static int ms_counter;
private:
    std::string m_url;
private:
    static void control();
public:
    explicit TemperatureAppDAL(std::string url = "");
    TemperatureAppDAL(const TemperatureAppDAL &) = delete;
    TemperatureAppDAL &operator =(const TemperatureAppDAL &) = delete;
    TemperatureAppDAL(TemperatureAppDAL &&) = delete;
    TemperatureAppDAL &operator =(TemperatureAppDAL &&) = delete;
    ~TemperatureAppDAL() = default;
public:
    std::string &url() { return m_url;}
    const std::string &url() const { return m_url;}
};


#endif //TEMPERATUREAPPDAL_H_
