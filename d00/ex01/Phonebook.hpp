#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "Contact.hpp"

class   Phonebook{

public:

	void	search(void);
	void	add(Contact contact);
	void	print(void);
	void	searchOne(int i);

	Phonebook(void);
	~Phonebook(void);

private:

	Contact contact[8];
	int		count;
};

#endif