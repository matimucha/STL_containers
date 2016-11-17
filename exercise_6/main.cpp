#include <iostream>
#include <unordered_set>

std::unordered_set<int> myUnorderedSet = { 1, 2, 3, 4, 5, 6, 7 };

int main()
{
    std::cout<<"Bucket for middle value: " << myUnorderedSet.bucket(4)<<std::endl;
    std::cout<<"Bucket size for previous value: " << myUnorderedSet.bucket_size(4)<<std::endl;
    std::cout<<"Bucket count in myUnorderedSet: " << myUnorderedSet.bucket_count()<<std::endl;
    return 0;
}
