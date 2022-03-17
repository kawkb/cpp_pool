#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *m_brain;
public:
std::string getType(void)const;
void        makeSound(void)const;
Cat         &operator=(const Cat &cp);
            Cat(const Cat &cp);
            Cat(void);
virtual     ~Cat();
};

#endif