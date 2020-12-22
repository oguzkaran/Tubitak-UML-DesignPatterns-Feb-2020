/*----------------------------------------------------------------------------------------------------------------------
    exception_ptr akıllı göstericisi (smart pointer) ile bir thread'deki exception başka bir thread'de aşağıdaki örnekteki
    gibi işlenebilir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <exception>
#include <cstdlib>
#include <ctime>

long g_sum1 = 0;
long g_sum2 = 0;
std::vector<std::exception_ptr> g_exceptions;

void thread_proc1(std::size_t n, std::mutex &m)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    for (int i{0}; i < n; ++i) {
        try {
            auto val{std::rand() % 100};

            if (val == 0)
                throw std::exception{"zero value in thread_proc1"};

            g_sum1 += val;
        }
        catch (...) {
            std::lock_guard g{m};
            g_exceptions.push_back(std::current_exception());
        }
    }
}


void thread_proc2(std::size_t n, std::mutex &m, int min, int max)
{
    try {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        for (int i{0}; i < n; ++i) {
            auto val{std::rand() % (max - min) + min};

            if (val < 0)
                throw std::exception{"negative value in thread_proc2"};

            g_sum2 += val;
        }
    }
    catch (...) {
        std::lock_guard g{m};
        g_exceptions.push_back(std::current_exception());
    }
}

int main()
{
    std::mutex m;
    int min, max;

    std::cout << "min?";
    std::cout.flush();
    std::cin >> min;

    std::cout << "max?";
    std::cout.flush();
    std::cin >> max;

    std::thread t1 {thread_proc1, 1000000, std::ref(m)};
    std::thread t2 {thread_proc2, 1000000, std::ref(m), min, max};

    t1.join();
    t2.join();

    std::cout << "sum1:" << g_sum1 << '\n';
    std::cout << "sum2:" << g_sum2 << '\n';

    for (auto const &exptr : g_exceptions) {
        try {
            if (exptr != nullptr)
                std::rethrow_exception(exptr);
        }
        catch (const std::exception &ex) {
            std::cout << ex.what() << '\n';
        }
    }

    return 0;
}
