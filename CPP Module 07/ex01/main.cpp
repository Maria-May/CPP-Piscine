#include <iostream>
#include "TempHeader.hpp"

void minmin(int &a)
{
	a--;
}

template<typename T>
void printa(T &a)
{
	std::cout << a << std::endl;
}

int main( void )
{
	int a[5] = {10, 9 ,8 ,7 ,6};
	::iter(a, static_cast<std::size_t>(sizeof(a)/sizeof(a[0])), &minmin);
	::iter(a, static_cast<std::size_t>(sizeof(a)/sizeof(a[0])), &printa);
	std::string b[] = {"HATE", "THIS", "DAY"};
	::iter(b, static_cast<std::size_t>(sizeof(b)/sizeof(b[0])), &printa);
	return EXIT_SUCCESS;
}