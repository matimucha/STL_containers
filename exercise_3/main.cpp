#include <iostream>
#include <vector>

std::vector<int> myVector {};

int main()
{
    std::cout<<"myVector size: "<<myVector.size()<<std::endl;
    std::cout<<"myVector capacity: "<<myVector.capacity()<<std::endl;
    myVector.resize(10);
    std::fill(myVector.begin(), myVector.end(), 5);
    std::cout<<"myVector new size: "<<myVector.size()<<std::endl;
    std::cout<<"myVector new capacity: "<<myVector.capacity()<<std::endl;
    myVector.reserve(20);
    std::cout<<"myVector next new size: "<<myVector.size()<<std::endl;
    std::cout<<"myVector next new capacity: "<<myVector.capacity()<<std::endl;
    myVector.shrink_to_fit();
    std::cout<<"myVector last size: "<<myVector.size()<<std::endl;
    std::cout<<"myVector last capacity: "<<myVector.capacity()<<std::endl;
    return 0;
}
