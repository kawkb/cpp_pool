#include "EasyFind.hpp"
#include <array>
#include <vector>
int main()
{
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    std::vector<int> vec;
    for (int i = 0; i < 5; i++)
        vec.push_back(i + 1);
    std::cout << easyFind(arr, 3) << std::endl;
    std::cout << easyFind(vec, 3) << std::endl;
    std::cout << easyFind(vec, 20) << std::endl;
    return 0;
}