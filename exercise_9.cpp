/*
 * Exercise 9:
 * 1. Write function is_palindrome that will check if given std::string is a palindrome or not.
 * Use std::mismatch()
*/

#include<iostream>
#include<string>
#include<algorithm>

bool is_palindrome (std::string str)
{
    auto result = mismatch ( str.begin(), str.end(),
                             str.rbegin(), str.rend());
    if (result.first == str.end()) return true;
    return false;
}

int main()
{

    std::string input1 {"kajak"};
    
    std::cout << "Is palindrome: " << input1 << " -> " << is_palindrome(input1) << std::endl;
    
    return 0;

}

