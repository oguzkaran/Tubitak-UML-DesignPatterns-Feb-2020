#ifndef XMLBUILDER_H_
#define XMLBUILDER_H_


#include <utility>
#include <string>

#include "XMLElement.hpp"

class XMLBuilder {
private:
     XMLElement m_element;
public:
    void add_tag(const std::string &tag)
    {
        m_element.m_tag = tag;
    }

    void add_title(const std::string &value)
    {
        m_element.m_value = value;
    }

    void add_attribute(const std::pair<std::string, std::string> &attr)
    {
        m_element.m_attributes[attr.first] = attr.second;
    }

    XMLElement build() { return std::move(m_element);}
};


#endif //XMLBUILDER_H_
