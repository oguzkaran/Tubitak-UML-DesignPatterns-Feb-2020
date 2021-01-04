#pragma once

#include <string>
#include <fstream>

struct PersistanceManager final {
    template <typename T>
    static void save(const T &r, const std::string &fname);
};

template <typename T>
void PersistanceManager::save(const T &r, const std::string &fname)
{
    std::ofstream f{fname};
    //...

    f << r << endl;
}
