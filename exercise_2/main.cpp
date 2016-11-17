#include <iostream>
#include <vector>

std::vector<int> myVector;

int main()
{
    myVector = {1, 2, 3, 4, 5, 6};
    myVector.erase(myVector.begin());
    myVector.emplace_back(5); //can also use push_back
    myVector.emplace(myVector.begin(), int(12));
    std::cout<<"myVector size: "<<myVector.size()<<std::endl;
    std::cout<<"myVector max size: "<<myVector.max_size()<<std::endl;
    for(auto &i : myVector)
    {
        std::cout<<i<<", "; //when iterating with new style loop, don't use std::vector::at()
                            //instead use as it is used here
    }

    //old-style loop
    /*
     * for(int i = 0; i < myVector.size(); ++i)
     * {
     *      std::cout<<myVector.at(i);
     * }
     */
    myVector.clear();
    std::cout<<"\nmyVector new size: "<<myVector.size();
    return 0;
}
