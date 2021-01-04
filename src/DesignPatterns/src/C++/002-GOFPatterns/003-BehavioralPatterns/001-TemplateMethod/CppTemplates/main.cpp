#include <iostream>
#include <stack>
#include <list>

int main()
{
    std::stack<int, std::list<int>> int_stack;

    for (size_t i{0}; i < 10; ++i)
        int_stack.push(i * 10);

    while (!int_stack.empty()) {
        std::cout << int_stack.top() << ' ';
        int_stack.pop();
    }

    std::cout << '\n';


    return 0;
}
