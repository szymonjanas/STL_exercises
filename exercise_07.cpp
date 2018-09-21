/*
 * 1. Use std::bind to create functor that multiplies given value by 5 (use std::multiplies).
 * 2. Print result of this functor with 11 as an argument.
 * 3. Replace std::bind with lambda function.
 * 4. Use std::function instead of auto.
*/

#include <iostream>
#include <functional>

class Functor
{
    public:
        int operator()(int a, int b)
        {
            return std::multiplies<int>()(a, b);
        }
};

int main()
{
    int b = 5;
    
    std::function<int(int)> xfive =
        [&](int a){return std::multiplies<int>()(a, b); };

    std::cout << "Lambda used: " << xfive(11) << std::endl;
    
    std::function<int(int)> yfive =
        std::bind(Functor(), std::placeholders::_1 , b);
    
    std::cout << "std::bind used: " << yfive(11) << std::endl;

    return 0;

}

