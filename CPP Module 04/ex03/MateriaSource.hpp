#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
private:
	const static int _materias_size = 4;
	AMateria *_materias[MateriaSource::_materias_size];
	int _number_learned;
public:
	MateriaSource();
	MateriaSource(const MateriaSource &src);
	~MateriaSource();
	MateriaSource&operator=(const MateriaSource &other);
	virtual void learnMateria(AMateria *materia_to_learn);
	virtual AMateria *createMateria(std::string const &type);
	void printMaterias() const;
};