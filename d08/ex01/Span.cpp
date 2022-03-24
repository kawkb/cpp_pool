#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span(unsigned int N): m_size(N)
{
}

Span::Span(Span const &cp): m_size(cp.m_size)
{
     m_vec = cp.m_vec;
}

Span::Span(void):m_size(0)
{
}

Span &Span::operator=(Span const &cp)
{
    m_size = cp.m_size;
    m_vec = cp.m_vec;
    return *this;
}

Span::~Span()
{
}

void    Span::addNumber(int nbr)
{
    try
    {
        if (m_vec.size() >= m_size)
            throw std::exception();
        m_vec.push_back(nbr);
    }
    catch (std::exception())
    {
        std::cout << "ARRAY IS FULL" << std::endl;
    }
}

int                     Span::shortestSpan(void)
{
    std::vector <int>tmp = m_vec;
    std::sort(tmp.begin() - tmp.end());
    int ret = tmp[1] - tmp[0];
    for(unsigned int i = 1; i < m_size; i++)
    {
        if((tmp[i] - tmp [i - 1]) < ret)
            ret = tmp[i] - tmp [i - 1];
    }
    return(ret);
}

int                     Span::longestSpan()
{
    std::vector<int>::iterator max = std::max_element(m_vec.begin(), m_vec.end());;
    std::vector<int>::iterator min = std::min_element(m_vec.begin(), m_vec.end());;
    return(*max - *min);
}