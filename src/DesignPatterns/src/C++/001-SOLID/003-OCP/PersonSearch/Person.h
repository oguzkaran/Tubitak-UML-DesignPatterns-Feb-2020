#pragma once

#include <string>
#include <vector>

enum class MaritalStatus {Single, Married, Divorced};
enum class Gender {Female, Male, NotAssign};

class Person {
private:
    std::string m_name;
    MaritalStatus m_maritalStatus;
    Gender m_gender;
    //...
public:
    Person(const std::string &name, const MaritalStatus &maritalStatus, const Gender &gender)
            : m_name(name), m_maritalStatus(maritalStatus), m_gender(gender)
    {}
public:
    std::string get_name() const { return m_name; }
    MaritalStatus get_marital_status() const {return m_maritalStatus;}
    Gender get_gender() const { return m_gender;}
    //...
};




