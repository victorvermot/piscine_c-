#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	return ;
}

Character::~Character()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	return ;
}

Character::Character(const Character& other)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character& Character::operator = (const Character& rhs)
{
	std::cout << "Equal operator overload called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name;
		for (int i = 0; i < INVENTORY_SIZE; i++)
		{
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m->clone();
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx])
	{
		std::cout << this->_name << " uses ";
		_inventory[idx]->use(target);
		_inventory[idx] = NULL;
	}
	else
		std::cout << "You have no materia equiped" << std::endl;
}
