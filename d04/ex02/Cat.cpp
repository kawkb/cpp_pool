#include "Cat.hpp"

Cat::~Cat(void)
{
    delete m_brain;
    std::cout << "Cat Default Destructor Called!" << std::endl;
}

Cat::Cat(void) : Animal()
{
    std::cout << "Cat Default Constructor Called!" << std::endl;
    m_brain = new Brain();
    m_type = "Cat";
}

Cat::Cat(const Cat &cp): Animal(cp)
{
    m_brain = new Brain(*(cp.m_brain));
    m_type = cp.m_type;
}

Cat  &Cat::operator=(const Cat &cp)
{
    m_brain = new Brain(*(cp.m_brain));
    m_type = cp.m_type;
    return(*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "Cat sound is miaw miaw!" << std::endl;
}

std::string     Cat::getType(void)const
{
    return(m_type);
}