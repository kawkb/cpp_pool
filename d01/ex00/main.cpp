#include "Zombie.hpp"
void     randomChump(std::string name);
Zombie*     newZombie(std::string name);

int     main(void)
{
    Zombie  *did;
    did = newZombie("MOLDY CLOWN");
    std::cout << did << std::endl;
    randomChump("GORED EYEBALL");
}