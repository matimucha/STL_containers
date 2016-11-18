#include <iostream>
#include <functional>
#include <string>
#include <iterator>
#include <algorithm>

bool is_palindrome(std::string myString)
{
    auto iterators = std::mismatch(myString.begin(), myString.end(), myString.rbegin());
    if(iterators.first == myString.end() && iterators.second == myString.rend())
    {
        return true;
    }
    else return false;
}

int main()
{
    std::string myString = "czolg";
    std::cout<<"Is palindrome? " << (is_palindrome(myString) ? "true" : "false") << std::endl;
    return 0;
}
