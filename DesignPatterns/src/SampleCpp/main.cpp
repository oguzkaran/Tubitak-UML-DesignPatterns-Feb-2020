/*----------------------------------------------------------------------------------------------------------------------
    [[nodiscard]] attribute'u ile kullanılmayan kod elemanlarına ilişkin derleyicilerin uyarı mesajı vermesi
    engellenebilir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <vector>

[[nodiscard]]
int get_rand(int min, int max)
{
    return std::rand() % (max - min) + min;
}

template <typename T>
int write_file(const std::vector<T> &vec)
{
    int count = 0;
    //...


    return count;
}

int main()
{
    get_rand(10, 20);

    return 0;
}
