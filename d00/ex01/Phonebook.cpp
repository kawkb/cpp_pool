#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"
#include "Contact.hpp"

Phonebook::Phonebook(void)
{
	count = 0;
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

void	Phonebook::searchOne(int i)
{
	if (i >= count || i < 0 || i >= 8) 
		std::cout << "CONTACT NOT FOUND !!" << std::endl;
	else
		contact[i].printAll();
}

void	Phonebook::search(void)
{
	int	i;
	int j;

	i = 0;
	j = count > 8? 8: count;
	std::cout << "|" << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name"<< "|" ;
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << "|" << std::endl;
	while (i < j)
	{
		std::cout << "|" << std::setw(10) << std::right << i << "|";
		contact[i].print();
		std::cout << std::endl;
		i++;
	}
	return;
}
