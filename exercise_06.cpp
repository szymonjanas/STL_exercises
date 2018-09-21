/*
 * Exercise 6:
 * 1. Create std::forward_list with some data (int) at least 7.
 * 2. Get two iterators with global functions begin(), end().
 * 3. Print size of the list.
 * 4. Get iterator to 5th element and print its value.
 * 5. Print distance() from begin to this iterator.
*/

#include<iostream>
#include<forward_list>

int main()
{
    std::forward_list<int> data = {5 , 7, 4, 11, 34, 26, 90, 43, 23};
    
    auto begData = std::begin(data);
    auto endData = std::end(data);
    
    std::cout << "Size: " <<  distance(begData, endData) << std::endl;
    
    auto data4 = begData;
    advance(data4, 4); 
    std::cout << "Value of itr data4: " << *data4 << std::endl;
    
    std::cout << "Distance between begin and data4: " << distance(begData, data4) << std::endl;

    return 0;

}

