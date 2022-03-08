#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int Character::index = 0;

Character::Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		_inventoryState[i] = FREE;
	}
	return ;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventoryState[i] = FREE;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (_inventoryState[i] == OCCUPIED)
			delete _inventory[i];
	}
	return ;
}

Character::Character(Character& other)
{
	AMateria *old[4];
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (other._inventoryState[i] == OCCUPIED)
		{
			old[i] = other._inventory[i];
			delete other._inventory[i];
		}
	}
	// *_inventory = old;
	*this = other;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (_inventoryState[i] == FREE)
		{
			if (m->getType() == "ice")
				_inventory[i] = new Ice();
			else if (m->getType() == "cure")
				_inventory[i] = new Cure();
			_inventoryState[i] = OCCUPIED;
		}
	}
}

void Character::unequip(int idx)
{
	if (_inventoryState[idx] == OCCUPIED)
		_inventoryState[idx] = FREE;
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventoryState[idx] == OCCUPIED)
	{
		_inventory[idx]->use(target);
		delete _inventory[idx];
		_inventoryState[idx] = FREE;
	}
}
