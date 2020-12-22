#if 1

#include <iterator>
#include <algorithm>

#include "XMLElement.hpp"

using namespace std;

int main()
{
    XMLElement::Builder builder;

    auto elem =
            builder
            .add_tag("memoryblock")
            .add_attribute(std::make_pair("dataflash1", "f1000"))
            .add_title("sample device")
            .build();

    //...

    return 0;
}

#endif
