#include "Cure.hpp"

Cure::Cure() {
	std::cout << "Cure is created" << std::endl;
	this->_type = "cure";
}

Cure::Cure( Cure const & src ): AMateria("cure")
{
	*this = src;
}
Cure::~Cure( void )
{
	std::cout << "Cure is destroyed" << std::endl;
}
Cure	&Cure::operator=( const Cure &other )
{
	this->_type = other._type;
	return *this;
}
AMateria	*Cure::clone( void ) const
{
	return (new Cure());
}
void		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}