#include <iostream>
#include <functional>
#include <array>
#include <iterator>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdlib>
int f()
{

}

int main()
{
    std::vector<int> myVector;
    std::generate_n(std::back_insert_iterator<std::vector<int>>(myVector), 10, [] () { return 5; });
    std::sort(myVector.begin(), myVector.end());
    std::copy(myVector.begin(), myVector.end(), std::ostream_iterator<int>(std::cout, " "));
    return 0;
}
