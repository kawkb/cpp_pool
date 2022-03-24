#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>

template <typename T>
int    easyFind(T x, int y)
{
    try
    {
        typename T::iterator iter = x.begin();
        if ((iter = std::find(x.begin(), x.end(), y)) != x.end())
            return (*iter);
        else
            throw std::exception();
    }
    catch (std::exception &e)
    {
        std::cout << "Not Found" << std::endl;
    }
    return 0 ;
}
#endif