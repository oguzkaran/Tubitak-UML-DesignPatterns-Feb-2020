/*----------------------------------------------------------------------------------------------------------------------
    optional sınıfı

    11 14 17 20
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <iterator>
#include <optional>

std::optional<int> get_val(int min, int max, int threshold)
{
    auto val = std::rand() % (max - min) + min;

    return val <= threshold ? std::make_optional(val) : std::nullopt;
}

int main()
{
    using namespace std;

    srand(static_cast<unsigned int>(time(nullptr)));

    if (auto opt = get_val(10, 20, 15); opt) {
        std::cout << opt.value() << '\n';
        opt.value() *= 2;
        std::cout << opt.value() << '\n';
    }
    else
        std::cout << "Istenen deger uretilemedi\n";

    return 0;
}
