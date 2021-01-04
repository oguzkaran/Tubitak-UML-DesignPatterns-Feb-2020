#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class TodoInfo {
    friend std::ostream &operator <<(std::ostream &os, const TodoInfo &r);
private:
    std::string m_title;
    std::vector<std::string> m_items;
public:
    TodoInfo(const std::string &title) : m_title {title} {}
public:
    std::vector<std::string> get_items() const {return m_items;}
    std::string get_title() const { return m_title; }
public:
    void add_item(const std::string &r);
};

