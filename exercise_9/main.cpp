#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <iterator>

std::vector<int> myVector = { 1, 2, 3, 4, 5 };

int main()
{
    std::transform(myVector.begin(), myVector.end(), std::ostream_iterator<int>(std::cout, " "),
                   std::bind(std::multiplies<int>(), std::placeholders::_1, 5));
    return 0;
}
