#include "Weapon.hpp"

const std::string&  Weapon::getType(void)
{
    std::string &ref = type;
    return (ref);
}

void    Weapon::setType(std::string str)
{
    type = str;
}

Weapon::Weapon(void)
{
    std::cout << "Constructor Called." << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "distructor Called." << std::endl;
}