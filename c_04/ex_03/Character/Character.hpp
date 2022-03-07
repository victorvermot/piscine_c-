#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"
# include "../Materia/AMateria.hpp"
# include "../Materia/Ice.hpp"
# include "../Materia/Cure.hpp"

# define FREE 0
# define OCCUPIED 1
# define INVENTORY_SIZE 4

class Character : public ICharacter
{
public:
    Character();
    Character(std::string name);
    Character(Character& other);
    ~Character();
    std::string const & getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
private:
    std::string _name;
    static int index;
    AMateria *_inventory[4];
    int _inventoryState[INVENTORY_SIZE];
};

#endif