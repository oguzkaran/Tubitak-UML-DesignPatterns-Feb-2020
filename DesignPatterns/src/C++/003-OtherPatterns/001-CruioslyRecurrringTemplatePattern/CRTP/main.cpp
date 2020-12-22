#if 1
#include <iostream>
#include <string>
#include <memory>
#include <iterator>
#include <algorithm>
#include <list>
#include <vector>
#include "Device.h"

using namespace std;

template <typename T>
void sort(vector<T> &vec)
{
    sort(begin(vec), end(vec), [](const auto &r1, const auto &r2) { return r1.compare_to(r2) < 0;});
}

int main()
{
    vector<Device> devices {
        Device{10, "test", "192.168.2.123"},
        Device{1, "mest", "192.168.2.156"},
        Device{5, "hest", "192.168.2.16"}};

    sort(devices);

    for (auto &d : devices)
        cout << d.get_name() << endl;

    return 0;
}

#endif
