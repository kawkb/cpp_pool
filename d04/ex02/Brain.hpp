#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain
{
private:
    std::string m_ideas[100];
public:
Brain   &operator=(const Brain &cp);
        Brain(const Brain &cp);
        Brain(void);
        ~Brain();
};

#endif