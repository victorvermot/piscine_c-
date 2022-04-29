#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"

# define FREE 0
# define OCCUPIED 1
# define INVENTORY_SIZE 4

class AMateria;

class Character : public ICharacter
{
public:
    Character();
    Character(std::string name);
    Character(const Character& other);
	~Character();
    Character& operator = (const Character& rhs);

    std::string const & getName() const;

    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    std::string _name;
    AMateria *_inventory[4];
};

#endif