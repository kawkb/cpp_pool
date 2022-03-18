#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>
#include <iomanip>

class   Contact{

public:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    void printAll(void);
    void print(void);
    Contact(void);
    ~Contact(void);
};

#endif