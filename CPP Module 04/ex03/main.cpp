#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	Character *herry = new Character("Herry");
	herry->equip(src->createMateria("ice"));
	herry->equip(src->createMateria("cure"));
	Character ben;
	ben.equip(src->createMateria("cure"));
	ben.printInventory();
	ben = *herry;
	ben.printInventory();
	ben.use(0, *herry);
	ben.printInventory();
	ben.equip(src->createMateria("ice"));
	ben.equip(src->createMateria("ice"));
	ben.equip(src->createMateria("ice"));
	tmp = src->createMateria("ice");
	ben.equip(tmp);
	ben.printInventory();
	herry->printInventory();
	delete bob;
	delete me;
	delete src;
	delete herry;
	delete tmp; //5th space check
	return (0);
}
