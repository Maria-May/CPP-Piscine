#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Amateria is created" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Amateria is destroyed" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "Amateria is created" << std::endl;
	_type = type;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}
