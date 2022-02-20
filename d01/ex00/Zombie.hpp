#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class   Zombie{

private:

    std::string _name;

public:

    void    announce(void);

    Zombie(std::string str);
    Zombie(void);
    ~Zombie(void);
};

#endif