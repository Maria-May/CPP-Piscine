#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	//*** VECTOR ***
	std::vector<int> vect;
	std::vector<int>::iterator it;
	for (int i = 1; i < 59; i += 2)
		vect.push_back(i);
	try{
		it = easyfind(vect, 43);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		it = easyfind(vect, 42);
		std::cout << *it << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//*** LIST ***
	std::list<int> list;
	std::list<int>::iterator iter;
	for (int i = 1; i < 59; i += 2)
		list.push_back(i);
	try{
		iter = easyfind(list, 43);
		std::cout << *iter << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try{
		iter = easyfind(list, 42);
		std::cout << *iter << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return EXIT_SUCCESS;
}