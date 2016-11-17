#include <iostream>
#include <list>
#include <vector>

//std::list<int> myList;
std::vector<int> myVector;

int main()
{
    /*for(int i = 0; i < 10000000; ++i)
    {
        myList.push_back(i);
    }
    auto it = myList.begin();
    for(int i = 0; i < myList.size(); ++i)
    {
        if(*it == 500000)
        {
            std::cout<<*it;
            break;
        }
        ++it;
    }*/
    myVector.reserve(10000000);
    for(int i = 0; i < 10000000; ++i) //may be replaced by std::iota(myVector.begin(), myVector.end(), 1)
    {                                 //iota adds values incrementing it for each addition
        myVector.push_back(i);
    }
    std::cout<<myVector.at(500000);
    return 0;
}
