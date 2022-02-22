#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>

class Weapon
{
private:
    std::string type;

public:
    const   std::string& getType(void);
    void    setType(std::string str);

    Weapon(void);
    ~Weapon(void);
};






#endif