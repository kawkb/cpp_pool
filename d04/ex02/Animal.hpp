#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal
{
protected:
    std::string m_type;

public:

virtual std::string getType(void)const;
virtual void        makeSound(void) const = 0;
Animal              &operator=(const Animal &cp);
                    Animal(const Animal &cp);
                    Animal(void);
virtual             ~Animal();
};

#endif