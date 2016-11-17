#include <iostream>
#include <forward_list>

std::forward_list<int> myForwardList = { 1, 2, 3, 4, 5, 6, 7 };

int main()
{
    auto it_first = std::begin(myForwardList);
    auto it_last = std::end(myForwardList);
    std::cout<<"List size: "<< std::distance(it_first, it_last)<<std::endl;
    std::advance(it_first, 4);
    std::cout<<"5th element value: "<<*it_first<<std::endl;
    std::cout<<"Distance between iterator and begin: "<<std::distance(myForwardList.begin(), it_first)<<std::endl;
    return 0;
}
