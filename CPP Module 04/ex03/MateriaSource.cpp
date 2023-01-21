#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _number_learned(0)
{
	for (int i = 0; i < MateriaSource::_materias_size; i++)
		this->_materias[i] = NULL;
	std::cout << "MateriaSource is created" << std::endl;
}
MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource is destroyed" << std::endl;
	for (int i = 0; i < MateriaSource::_materias_size; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}
MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < MateriaSource::_materias_size; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		if (other._materias[i])
			this->_materias[i] = other._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return *this;
}
void MateriaSource::learnMateria(AMateria *materia_to_learn)
{
	if (this->_number_learned >= MateriaSource::_materias_size)
		std::cout << "Can't learn any more materias" << std::endl;
	else
	{
		this->_materias[this->_number_learned] = materia_to_learn;
		this->_number_learned++;
		std::cout << "Learned " << materia_to_learn->getType() << " Materia"
				  << std::endl;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MateriaSource::_materias_size && this->_materias[i]; i++)
	{
		if (type == this->_materias[i]->getType())
			return this->_materias[i]->clone();
	}
	return NULL;
}

void MateriaSource::printMaterias() const
{
	for (int i = 0; i < MateriaSource::_materias_size; i++)
	{
		if (this->_materias[i])
			std::cout << i << ": " << this->_materias[i]->getType() << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}