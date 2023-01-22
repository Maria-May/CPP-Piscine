#include <iostream>
#include "TempHeader.hpp"

int main( void )
{
	int a = 5;
	int b(a);
	int c(10);
	std::cout << a << b << c << std::endl;
	swap(a, c);
	std::cout << a << b << c << std::endl;
	std::cout << ::min(a, c) << std::endl;
	std::cout << ::max(a, b) << std::endl;
	std::cout << ::min(c, b) << std::endl;
	std::cout << ::max(b, c) << std::endl;
	std::string str1 = "abc";
	std::string str2 = "cba";
	std::cout << str1 << str2 << std::endl;
	swap(str1, str2);
	std::cout << str1 << str2 << std::endl;
	std::cout << ::min(str1, str2) << std::endl;
	std::cout << ::max(str1, str2) << std::endl;
	return EXIT_SUCCESS;
}