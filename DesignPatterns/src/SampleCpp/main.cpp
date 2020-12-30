/*----------------------------------------------------------------------------------------------------------------------
    visit fonksiyonu ve variant sınıfı ile visitor kalıbı çok kolay bir biçimde implemente edilebilir
----------------------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <variant>

class MyVisitor {
    //...
public:
    void operator()(int val)
    {
        std::cout << "int:" << val << '\n';
    }

    void operator()(std::string s)
    {
        std::cout << "std::string:" << s << '\n';
    }

    void operator()(double val)
    {
        std::cout << "double:" << val << '\n';
    }
};

int main()
{
    std::variant<int, double, std::string> v;
    MyVisitor myVisitor;

    v = 10;
    std::visit(myVisitor, v);

    v = 3.4;

    std::visit(myVisitor, v);

    v = "ankara";

    std::visit(myVisitor, v);

    return 0;
}
