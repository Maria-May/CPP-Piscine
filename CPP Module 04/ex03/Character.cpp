#include "Character.hpp"

Character::Character(): _name(""), _number_equipped(0)
{
	std::cout << "Character is created" << std::endl;
	for (int i = 0; i < Character::_inventory_size; i++) {
		this->_inventory[i] = NULL;
		this->_floor[i] = NULL;
	}
	return;
}
Character::Character( const std::string &name )
{
	std::cout << "Character is created" << std::endl;
	for (int i = 0; i < Character::_inventory_size; i++) {
		this->_inventory[i] = NULL;
		this->_floor[i] = NULL;
	}
	this->_name = name;
	return;
}
Character::Character( Character const & src )
{
	std::cout << "Character is copy created" << std::endl;
	for (int i = 0; i < Character::_inventory_size; i++) {
		this->_inventory[i] = NULL;
		this->_floor[i] = NULL;
	}
	*this = src;
}
Character::~Character()
{
	std::cout << "Character is destroyed" << std::endl;
	for (int i = 0; i < Character::_inventory_size; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (this->_floor[i])
			delete this->_floor[i];
	}
}
Character &Character::operator=(Character const &other)
{
	this->_number_equipped = 0;
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		if (other._inventory[i])
			this->_number_equipped++;
	}
	this->_name = other.getName();
	return *this;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < _inventory_size; i++)
	{
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			this->_number_equipped++;
			std::cout << "Equipped a " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "Couldn't equip a " << m->getType() << ", no more space" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	if (this->_inventory[idx]) {
		this->_floor[idx] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
	_number_equipped--;
}

void Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
	if (this->_floor[idx])
		delete this->_floor[idx];
	this->unequip(idx);
}
void Character::printInventory() const
{
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			std::cout << i << ": " << this->_inventory[i]->getType() << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}