/*
 * Exercise 5:
 * 1. Create a map of integers to string with content:
 *      {1 -> 'one', 2 -> 'two', 3 -> 'thr', 4 -> 'four', 5 -> 'five'}
 * 2. Add a new pair: {3 -> 'three'}.
 * 3. Erase element with key 5.
 * 4. Print how many values exist for all keys.
 * 5. Find element with key 4 and print  it is key and value.
*/

#include <map>
#include <iostream>
#include <string>

int main()
{
    std::map<int, std::string> mapa = {{1, "one"},{2, "two"},{3,"thr"},{4,"four"},{5, "five"}};
    
    mapa[3] = "three";

    mapa.erase(5);

    for (auto i = 1; i != mapa.size(); i++)
    {
        std::cout << mapa.count(i) << "  ";
    }

    auto search = mapa.find(4);
    std::cout << "iter: " << search->first << " value: " << search->second << std::endl;
    
    for(auto& el: mapa)
    {
        std::cout << "Key: " << el.first << " value: " << el.second << std::endl;
    }

    return 0;

}

