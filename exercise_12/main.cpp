#include <iostream>
#include <deque>
#include <algorithm>
#include <ctime>
#include <functional>
#include <iterator>

int main()
{
    std::deque<int> myDeque;
    std::generate_n(std::back_inserter(myDeque), 14, [](){ return std::modulus<int>()(rand(), 7); });
    std::sort(myDeque.begin(), myDeque.end());
    auto iterator = myDeque.begin();
    for(int i = 0; i < myDeque.size(); ++i)
    {
        std::cout << *iterator << ", ";
        iterator++;
    }
    std::cout<<std::endl;
    auto unique_it = std::unique(myDeque.begin(), myDeque.end());
    myDeque.erase(unique_it, myDeque.end());
    iterator = myDeque.begin();
    for(int i = 0; i < myDeque.size(); ++i)
    {
        std::cout << *iterator << ", ";
        iterator++;
    }
    auto rotate_it = myDeque.begin() + (myDeque.size()/2);
    std::rotate(myDeque.begin(), rotate_it ,myDeque.end());
    iterator = myDeque.begin();
    std::cout<<std::endl;
    for(int i = 0; i < myDeque.size(); ++i)
    {
        std::cout << *iterator << ", ";
        iterator++;
    }
    return 0;
}
