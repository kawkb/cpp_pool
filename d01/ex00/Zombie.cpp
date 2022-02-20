#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string str)
{
	_name = str;
	std::cout << "Constructor called" << std::endl;
	return;
}

Zombie::Zombie(void)
{
	std::cout << "Default Constructor called" << std::endl;
	return;
}

Zombie::~Zombie()
{
	std::cout << _name << " was destructed" << std::endl;
	return;
}
