/*
 * Exercise 10:
 * 1. Use iterators to intialize std::vector with some values (should occur more than once).
 * 2. Sort container.
 * 3. Print container (using iterator and std::copy).
 * 4. Make container unique.
 * 5. Print container.
 * 6. Reverse container.
 * 7. Print container.
*/

#include <vector>
#include <array>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string> 

void print(std::string data, std::vector<int> vct)
{
    std::cout << data;
    std::copy(vct.begin(), vct.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}

int main()
{

    std::array<int, 7> arr = {1, 4, 2, 6, 4, 0, 23};
    std::vector<int> vec (arr.begin(), arr.end());

    std::sort(vec.begin(), vec.end());

    print("Data sorted: ", vec);

    auto last = std::unique(vec.begin(), vec.end());
    vec.erase(last, vec.end());
    print("Data erased: ", vec);

    std::reverse(vec.begin(), vec.end());
    print("Data reversed: ", vec);
    
    return 0;

}

