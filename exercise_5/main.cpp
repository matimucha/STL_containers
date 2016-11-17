#include <iostream>
#include <set>
#include <algorithm>

std::set<int> mySet = {1, 2, 3, 4, 5, 6, 7};


int main()
{
    std::cout<<"Distance from begin to iterator: " <<
               std::distance(mySet.begin(), mySet.lower_bound(4))<<std::endl;
    std::cout<<"Distance from iterator to end: " <<
               std::distance(mySet.upper_bound(4), mySet.end())<<std::endl;
    std::cout<<"Range between iterators: " <<
               std::distance(mySet.equal_range(4).first, mySet.equal_range(4).second)<<std::endl;
    return 0;
}
