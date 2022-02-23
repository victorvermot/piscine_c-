#ifndef PHONE_BOOK_CLASS_H
# define PHONE_BOOK_CLASS_H

# include <iostream>

# include "Contact.class.hpp"

class PhoneBook
{

public:

	PhoneBook();
	~PhoneBook();

	void display_options(void);
	Contact	contacts[8];

private:
};


#endif