#include <iostream>
#include <string>
#include "phonebook.class.hpp"
#include "contact.class.hpp"


Contact   ADD(void)
{
	Contact contact;
	std::cout << "Please Insert First Name:"<< std::endl;
	std::getline(std::cin, contact.first_name);
	std::cout << "Please Insert Last Name:"<< std::endl;
	std::getline(std::cin, contact.last_name);
	std::cout << "Please Insert Nickname:"<< std::endl;
	std::getline(std::cin, contact.nickname);
	std::cout << "Please Insert Phone Number:"<< std::endl;
	std::getline(std::cin, contact.phone_number);
	std::cout << "Please Insert The Contact's Darkest Secret:"<< std::endl;
	std::getline(std::cin, contact.darkest_secret);
	return (contact);
}

int     main(void)
{
	std::string	cmd;
	Phonebook	phonebook;

	while(1)
	{
		std::cout << "Please Insert a Phonebook Command ADD, SEARCH or EXIT:" << std::endl;
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add(ADD());
		else if(cmd == "SEARCH")
			phonebook.search();
		else if(cmd == "EXIT")
			return (0);
	}
	return (0);
}