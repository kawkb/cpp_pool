#include <iostream>
#include <iomanip>
#include "phonebook.class.hpp"
#include "contact.class.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Phonebook::add(Contact contact)
{
	this->contact[count % 8] = contact;
	count++;
	return;
}

void	Phonebook::search(void)
{
	std::cout << std::setw(10) << std::cout << std::right << std::setfill (' ');

	std::cout << "Index" << "First Name" << "Last Name" << "Nickname" << std::endl;
	// str.replace(9, ".");
	return;
}
