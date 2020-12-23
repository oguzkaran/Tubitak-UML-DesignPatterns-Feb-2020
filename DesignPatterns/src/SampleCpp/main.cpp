/*----------------------------------------------------------------------------------------------------------------------
    thread sınıfının detach fonksiyonu
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <mutex>
#include <semaphore>

int main()
{
    using namespace std;

    std::cout << "Desteklenen donanim thread sayisi:" << thread::hardware_concurrency() << '\n';

    return 0;
}
