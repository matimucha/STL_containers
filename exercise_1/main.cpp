#include <iostream>
#include <array>

std::array<int, 10> array;

const int _array_size = array.size();

std::array<int, _array_size> array2 {};

int main()
{
    array.fill(5);
    array.at(3) = 3;

    array.swap(array2); //different option std::swap(array, array2);

    std::cout<<"Array size: "<<array.size()<<std::endl;
    std::cout<<"Array max size: "<<array.max_size()<<std::endl<<std::endl;

    std::cout<<"Array2 size: "<<array2.size()<<std::endl;
    std::cout<<"Array2 max size: "<<array2.max_size()<<std::endl<<std::endl;

    std::cout<<"First Array values: ";

    for(int i = 0; i < array.size(); ++i) //different option for(auto i : array)
    {
        if(i < array.size()-1)
            std::cout<<array.at(i)<<", ";
        else std::cout<<array.at(i)<<std::endl;
    }

    std::cout<<"Second Array values: ";
    for(auto i : array2) //solution for for loop from C++ 11 standard
    {
        std::cout<<i<<", ";
    }

    return 0;
}
