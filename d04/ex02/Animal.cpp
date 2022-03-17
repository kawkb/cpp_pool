#include "Animal.hpp"

Animal::Animal(void) : m_type("")
{
    std::cout << "Animal Default Constructor Called!" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal Default Destructor Called!" << std::endl;
}

Animal::Animal(const Animal &cp)
{
    m_type = cp.m_type;
}

Animal  &Animal::operator=(const Animal &cp)
{
    m_type = cp.m_type;
    return(*this);
}

std::string     Animal::getType(void)const
{
    return(m_type);
}