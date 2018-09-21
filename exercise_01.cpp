/*
 * Exercise 1:
 * 1. Create std::array with size: 10.
 * 2. Fill it with number 5.
 * 3. Assign to 4th element value 3.
 * 4. Create another array with the same size.
 * 5. Swap arrays.
 * 6. Print both - one array in one line.
*/
#include <array>
#include <iostream>

int main()
{
    std::array<int, 10> table;
    table.fill(5);
    table.at(3) = 3;

    std::array<int, 10> sectable;
    sectable.fill(0);

    table.swap(sectable);

    std::cout << "Loop with auto to print table:" << std::endl;
    for (auto element : table)
    {
        std::cout << element << "  ";
    }
    std::cout << "Loop with int i to print table:" << std::endl;
    for (int i = 0; i != 10; i++)
     {
         std::cout << sectable.at(i) << "  ";
     }

    return 0;
}

