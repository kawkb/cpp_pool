#include <iostream>
#include "contact.class.hpp"

Contact::Contact(void)
{
    std::cout << "Constructor called" << std::endl;
    return;
}

Contact::~Contact(void)
{
    std::cout << "Destructor called" << std::endl;
    return;
}