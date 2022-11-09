#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{

}
DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name + "_clap_name")
{
		
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap::DiamondTrap(const DiamondTrap &b)
{

}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{

}