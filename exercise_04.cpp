/*
 * Exercise 4:
 * 1. Create empty list.
 * 2. Fill it with numbers from 1 to 1'000'000.
 * 3. Measue time of execution (time ./a.out terminal).
 * 4. Print value of element with index 500'000.
 * 5. Measue time of execution.
 * 6. Replace list with vector.
 * 7. Measue time of execution.
*/

#include <list>
#include <iostream>
#include <vector>
#include <ctime>

int main()
{
    clock_t start, stop;
    double time;

    std::vector<int> vec;
    start = clock();
    for(unsigned long int  i = 1; i != 1000000; i++)
    {
        vec.push_back(i);
    }
    stop = clock();
    time = (double)(stop - start)/CLOCKS_PER_SEC;
    std::cout << "Vec: Time of filling 1 to 1000000: " << time << std::endl;  

    start = clock();
    auto iter = vec.begin();
    for (unsigned long int i = 1; i != 500000; i++)
    {
        iter++;
    }
    stop = clock();     
    std::cout << "Vec: Is 500000th found: " << *iter << std::endl;
    time = (double)(stop - start)/CLOCKS_PER_SEC;
    std::cout << "Vec: Time of searching 500000th element: " << time << std::endl;


    std::list<int> lst;
    start = clock();
    for (unsigned long int x = 1; x != 1000000; x++)
    {
        lst.push_back(x);
    }
    stop = clock();
    time = (double)(stop - start)/CLOCKS_PER_SEC;
    std::cout << "List: Time of filling 1 to 1000000: " << time << std::endl;  

    start = clock();
    auto itr = lst.begin();
    for (unsigned long int i = 1; i != 500000; i++)
    {
        itr++;
    }
    stop = clock();
    std::cout << "List: Is 500000th found: " << *iter << std::endl;
    time = (double)(stop - start)/CLOCKS_PER_SEC;
    std::cout << "List: Time of searching 500000th element: " << time << std::endl;
  
    return 0;

}

