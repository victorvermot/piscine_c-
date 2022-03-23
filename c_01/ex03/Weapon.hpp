#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
public:

	Weapon(std::string t);
	~Weapon(void);
	void setType(std::string);
	std::string const &getType(void) const;

private:

	std::string _type;

};

#endif