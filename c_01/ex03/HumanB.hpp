#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
public:

	HumanB(std::string n);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon &new_weapon);

private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif