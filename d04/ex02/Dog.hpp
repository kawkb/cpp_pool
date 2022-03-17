#ifndef DOG_H
#define DOG_H
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
private:
    Brain *m_brain;
public:

std::string getType(void)const;
void        makeSound(void)const;
Dog         &operator=(const Dog &cp);
            Dog(const Dog &cp);
            Dog(void);
virtual     ~Dog();
};

#endif