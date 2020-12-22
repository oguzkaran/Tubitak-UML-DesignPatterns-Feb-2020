#ifndef XMLELEMENT_H_
#define XMLELEMENT_H_

#include <utility>
#include <vector>
#include <map>
#include <string>
#include <memory>

class XMLElement {
private:
    std::string m_tag;
    std::map<std::string, std::string> m_attributes;
    std::string m_value;
private:
    explicit XMLElement(std::string tag = "",  std::string value = "") : m_tag{std::move(tag)}, m_value{std::move(value)} {}
public:
    class Builder {
    private:
        std::unique_ptr<XMLElement> m_up;
    public:
        Builder() : m_up{new XMLElement} {}
    public:
        Builder &add_tag(const std::string &tag)
        {
            m_up->m_tag = tag;

            return *this;
        }

        Builder &add_title(const std::string &value)
        {
            m_up->m_value = value;

            return *this;
        }

        Builder &add_attribute(const std::pair<std::string, std::string> &attr)
        {
            m_up->m_attributes[attr.first] = attr.second;

            return *this;
        }

        std::unique_ptr<XMLElement> build() { return std::move(m_up);}
    };
};


#endif //XMLELEMENT_H_
