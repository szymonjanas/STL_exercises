/*
 * Exercise 11:
 * 1. Create empty std::deque for int values.
 * 2. Generate 14 values using std::back_inserter and std::generate_n with rand() but limited to 7 (use std::modulus).
 * 3. Sort values and print.
 * 4. Leave only unique values in container and print them.
 * 5. Rotate them around middle element and print result.
*/

#include <iostream>
#include <algorithm>
#include <deque>
#include <ctime>
#include <cmath>
#include <string>

void print(std::string comm, std::deque<int> deq)
{
    std::cout << comm << ": ";
    for ( auto i : deq )
        std::cout << i << " ";
    std::cout << std::endl;
}

int main ()
{

    std::srand(time(0));
    
    std::deque<int> data;

    std::generate_n(std::back_insert_iterator<std::deque<int>>(data), 
            14, [](){ return rand() % 8; });
    
    print("Generated data", data);

    std::sort(data.begin(), data.end());
    
    print("Sorted data", data);

    auto last = std::unique(data.begin(), data.end());
    data.erase(last, data.end());

    print("Erase last data", data);

    std::rotate(data.begin(), data.begin() + (floor( data.size()/2)-1) ,data.end());
    
    print("Rotate data", data);

    return 0;

}

