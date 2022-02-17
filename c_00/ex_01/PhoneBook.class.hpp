#ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

# include <iostream>

# include "Contact.class.hpp"

class PhoneBook
{

public:

	Contact contacts[8];

	PhoneBook();
	~PhoneBook();

private:
};


#endif