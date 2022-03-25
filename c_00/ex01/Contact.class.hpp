#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# define BOLD "\e[1m"
# define UNBOLD "\e[0m"
class Contact
{

private:
	static int	_contact_num;
	void _format_strings(std::string str);
	void _print_details(Contact contact);
	std::string _get_lines(std::string msg);
	std::string	_ft_whitespace(std::string buffer);
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
