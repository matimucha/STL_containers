#include <iostream>
#include <functional>

int main()
{
    std::function<int(int)> multiple = std::bind(std::multiplies<int>(), std::placeholders::_1, 5);
    std::cout<<"std::function result: "<< multiple(11) << std::endl;
    std::function<int(int)> multiple_2 = [](int x) { return x*5; };
    std::cout<<"lambda function result: "<< multiple_2(11) << std::endl;
    return 0;
}
