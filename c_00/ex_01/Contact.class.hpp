#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{

private:
	static int	_contact_num;
	void _format_strings(std::string str);
	void _print_details(Contact contact);
	int	_ft_strlen(std::string str);
	std::string _get_lines(std::string msg);
	char	*_ft_whitespace(std::string buffer);
	std::string	_nickname;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_phone_number;
	std::string	_secret;

public:
	Contact(void);
	~Contact(void);
	void get_infos(void);
	void search(Contact contacts[8]);

};

#endif
