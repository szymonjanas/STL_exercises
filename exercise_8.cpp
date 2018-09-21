/*
 * 1. Create std::array of 6 doubles with the following elements:
 *      {5.0, 4.0, -1.4, 7.9, -8.22, 0.4}
 * 2. Sort elements of array using std::sort and provide functor, that sorts by absolute values (std::abs).
 * 3. Change functor object to lambda function.
*/

#include <iostream>
#include <array>
#include <cmath>
#include <algorithm>

class Sortt
{
    public:
    bool operator()(double ar1, double ar2)
    {
        return std::abs(ar1)<std::abs(ar2);
    }
};

int main()
{

    std::array <double, 6> data = {5.0, 4.0, -1.4, 7.9, -8.22, 0.4};
    Sortt op;
    std::sort(data.begin(), data.end(), op);
    std::sort(data.begin(), data.end(), [](double ar1, double ar2){
            return std::abs(ar1)<std::abs(ar2);
            });
    
    return 0;

}

