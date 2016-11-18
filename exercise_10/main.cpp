#include <iostream>
#include <functional>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>

std::string is_palindrome(std::string& myString)
{
    auto iterators = std::mismatch(myString.begin(), myString.end(), myString.rbegin());
    if(iterators.first == myString.end() && iterators.second == myString.rend())
    {
        return myString+" is palindrome";
    }
    else return myString+" is not palindrome";
}

int main()
{
    std::vector<std::string> myStringVector = {"kajak", "mama", "jablko", "piwo", "ala","devil lived", ""};
    std::transform(myStringVector.begin(), myStringVector.end(),
                   std::ostream_iterator<std::string>(std::cout, "\n"),
                   [](std::string myString) { if (myString.size()) return is_palindrome(myString);
                                            else return std::string("string is empty"); });
    return 0;
}
