#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal test;
    const Animal* dogo = new Dog();
    const Animal* mchicha = new Cat();
    std::cout << "dogo object type is    : " << dogo->getType()<< "." << std::endl;
    std::cout << "mchicha object type is : " << mchicha->getType() << "." << std::endl;
    dogo->makeSound();
    mchicha->makeSound();
    delete dogo;
    delete mchicha;
    return 0;
}