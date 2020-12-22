#include <iostream>
#include <memory>
#include <algorithm>
#include <list>

template <typename T>
void sink(std::unique_ptr<T> uptr)
{

}

class Sample {
public:
    Sample() = default;
    ~Sample() {std::cout << "Sample::~Sample()\n";}
};

int main()
{
    std::list<std::unique_ptr<Sample>> svec;

    svec.push_back(std::move(std::make_unique<Sample>()));
    svec.push_back(std::move(std::make_unique<Sample>()));
    svec.push_back(std::move(std::make_unique<Sample>()));
    svec.push_back(std::move(std::make_unique<Sample>()));

    std::for_each(svec.begin(), svec.end(), [](std::unique_ptr<Sample> &r) {sink(std::move(r));});

    std::cout << "Tum nesneler yok edildi";

    return 0;
}
