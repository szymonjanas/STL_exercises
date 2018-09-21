/*
 * Exercise 3:
 * 1. Create empty vector.
 * 2. Print size and capacity.
 * 3. Resize vector to size 10 and fill it with 5.
 * 4. Print size and capacity.
 * 5. Reserve space for 20 elements.
 * 6. Print size and capacity.
 * 7. Shrink to fit.
 * 8. Print size and capacity.
*/

#include <vector>
#include <iostream>

inline void printSizeAndCapacity(std::vector<int> vec)
{
    std::cout << "size: " << vec.size() << " capacity: " << vec.capacity() << std::endl;
}
int main()
{

    std::vector<int> vec;
    printSizeAndCapacity(vec);

    vec.resize(10, 5);
    printSizeAndCapacity(vec);
    
    vec.reserve(20);
    printSizeAndCapacity(vec);
    
    vec.shrink_to_fit();
    printSizeAndCapacity(vec);
    
    return 0;

}

