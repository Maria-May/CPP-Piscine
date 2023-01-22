#include "Array.hpp"

int main( void )
{
	Array<int>			intArray;
	Array<std::string>	stringArray(7);
	Array<std::string>	otherStringArray;
	stringArray[0] = "Hi";
	stringArray[1] = "Hello";
	stringArray[2] = "How are you?";
	stringArray[3] = "Fine and you?";
	stringArray[4] = "Doing great thanks!";
	stringArray[5] = "You're very welcome";
	std::cout << "intArray.size() = " << intArray.Size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.Size() << std::endl;
	for (unsigned int i = 0; i < stringArray.Size(); i++)
		std::cout << stringArray[i] << std::endl;
	otherStringArray = stringArray;
	otherStringArray[3] = "I'm good, how about you?";
	for (unsigned int i = 0; i < otherStringArray.Size(); i++)
		std::cout << otherStringArray[i] << std::endl;
	try
	{
		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	{
		Array<int> someshit(5);
		someshit[2] = 15;
		Array<int> tmp = someshit;
		Array<int> test(tmp);
	}

	return EXIT_SUCCESS;
}