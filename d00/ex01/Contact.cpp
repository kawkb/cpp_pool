#include <iostream>
#include "Contact.hpp"

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

void    printHelper(std::string str)
{
    if (str.length() >= 10)
	{
		str = str.substr(0, 9);
		str.append(1, '.');
	}
	std::cout << std::setw(10) << std::right << str << "|";
}

void	Contact::print(void)
{
    printHelper(first_name);
    printHelper(last_name);
    printHelper(nickname);
}

void    Contact::printAll(void)
{
    std::cout << std::setw(20) << std::left << "first name" << ": " << first_name << std::endl;
    std::cout << std::setw(20) << std::left << "last name" << ": " << last_name << std::endl;
    std::cout << std::setw(20) << std::left << "nickname" << ": " << nickname << std::endl;
    std::cout << std::setw(20) << std::left << "phone number" << ": " << phone_number << std::endl;
    std::cout << std::setw(20) << std::left << "darkest secret" << ": " << darkest_secret << std::endl;
}
