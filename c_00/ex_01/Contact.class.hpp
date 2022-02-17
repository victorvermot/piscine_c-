#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{

public:

	Contact(void);
	~Contact(void);

	char	*first_name;
	char	*last_name;
	char	*nickname;
	int		phone_number;
	char	*secret;
};

#endif