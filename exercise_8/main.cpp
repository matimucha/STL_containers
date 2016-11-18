#include <iostream>
#include <functional>

int main()
{
    std::function<int(int)> multiple = std::bind(std::multiplies<int>(), std::placeholders::_1, 5);
    std::cout<<"std::function multiple result: "<< multiple(11) << std::endl;
    std::function<int(int)> multiple_2 = [](int x) { return x*5; }; //may take reference, but you need
                                                                    //to define int x, for can't take rvalue
                                                                    //reference to function when declared lvalue ref
    std::cout<<"lambda function multiple result: "<< multiple_2(11) << std::endl;
    return 0;
}
