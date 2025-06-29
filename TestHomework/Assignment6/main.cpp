#include "templ.h"

int main()
{
    std::vector<float> vec {1, 2, 3};
    Class1 obj;
    Templ<int> ob(3, 34, vec);
    std::cout << ob.foo() << '\n';
    Class2 obj2;
    Templ<Class1> rpd(obj, 2, vec);
    Templ<Class2> sdf(obj2, 3, vec);
    std::cout << rpd.foo() << '\n';
    std::cout << sdf.foo() << '\n';
}