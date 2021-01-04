#ifndef XMLELEMENT_H_
#define XMLELEMENT_H_

#include <utility>
#include <vector>
#include <map>
#include <string>

class XMLElement {
    friend class XMLBuilder;
private:
    std::string m_tag;
    std::map<std::string, std::string> m_attributes;
    std::string m_value;
private:
    explicit XMLElement(std::string tag = "",  std::string value = "") : m_tag{std::move(tag)}, m_value{std::move(value)} {}
};


#endif //XMLELEMENT_H_
