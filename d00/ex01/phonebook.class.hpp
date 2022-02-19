#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include "contact.class.hpp"

class   Phonebook{

public:

	
	void	search(void);
	void	add(Contact contact);
	Phonebook(void);
	~Phonebook(void);
private:
	Contact contact[8];
	int		count;
};

#endif