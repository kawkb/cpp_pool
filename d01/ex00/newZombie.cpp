#include "Zombie.hpp"

Zombie*     newZombie(std::string name)
{
    Zombie *MeatFeast;

    MeatFeast = new Zombie(name);
    return(MeatFeast);
}