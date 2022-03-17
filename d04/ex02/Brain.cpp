#include "Brain.hpp"

Brain::~Brain(void)
{
    std::cout << "Brain Default Destructor Called!" << std::endl;
}

Brain::Brain(void)
{
    std::cout << "Brain Default Constructor Called!" << std::endl;
}

Brain::Brain(const Brain &cp)
{
    for(int i = 0; i< 100; i++)
        m_ideas[i] = cp.m_ideas[i];
}

Brain &Brain::operator=(const Brain &cp)
{
    for(int i = 0; i< 100; i++)
        m_ideas[i] = cp.m_ideas[i];
        return (*this);
}