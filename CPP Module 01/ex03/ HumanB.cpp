#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon) : _weapon(&weapon), _name(name) {}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB() {}


void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}