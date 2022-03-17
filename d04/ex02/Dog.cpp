#include "Dog.hpp"

Dog::~Dog(void)
{
    delete m_brain;
    std::cout << "Dog Default Destructor Called!" << std::endl;
}

Dog::Dog(void) : Animal()
{
    std::cout << "Dog Default Constructor Called!" << std::endl;
    m_type = "Dog";
    m_brain = new Brain();
}

Dog::Dog(const Dog &cp): Animal(cp)
{
    m_brain = new Brain(*(cp.m_brain));
    m_type = cp.m_type;
}

Dog  &Dog::operator=(const Dog &cp)
{
    m_brain = new Brain(*(cp.m_brain));
    m_type = cp.m_type;
    return(*this);
}

void    Dog::makeSound(void)const
{
    std::cout << "Dog sound is Haw Haw!" << std::endl;
}

std::string     Dog::getType(void)const
{
    return(m_type);
}