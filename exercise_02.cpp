/*
 * Exercise 2:
 * 1. Create vector with following values {1, 2, 3, 4, 5, 6}.
 * 2. Erase first value.
 * 3. Add 5 at the end.
 * 4. Create 12 in vector at the beginning (empalace).
 * 5. Print vector size and max_size.
 * 6. Print vector.
 * 7. Clear vector.
 * 8. Print size.
*/

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> vec = {1, 2, 4, 5, 6};
    
    vec.erase(vec.begin());

    vec.push_back(5);
    
    vec.emplace(vec.begin(), 12);

    std::cout << "Size: " << vec.size() << " Max size: " << vec.max_size() << std::endl;

    for (auto element : vec)
    {
        std::cout << element << "  ";
    }
    
    vec.clear();
    
    std::cout << "Size after clear: " << vec.size() << std::endl;

    return 0;

}

