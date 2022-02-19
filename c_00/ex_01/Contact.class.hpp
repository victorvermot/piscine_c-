#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{

private:
	static int	_contact_num;

public:

	Contact(void);
	~Contact(void);
	void get_infos(void);
	void search(Contact contacts[8]);
	void print_details(Contact contact);

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int		phone_number;
	std::string	secret;
};

#endif