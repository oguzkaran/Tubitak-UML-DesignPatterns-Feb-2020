#if 1
#include <iterator>
#include <map>

#include "XMLElement.hpp"
#include "XMLBuilder.hpp"

using namespace std;


int main()
{
    XMLBuilder builder;

    builder.add_tag("memoryblock");
    builder.add_attribute(std::make_pair("dataflash1", "f1000"));
    builder.add_title("sample device");
    auto elem = builder.build();

    //...

    return 0;
}

#endif
