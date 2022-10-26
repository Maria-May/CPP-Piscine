#include "Harl.hpp"

int	main(void)
{
	std::string	levels[6] = {"DEBUG", "INFO", "WARNING", "ERROR", "something", ""};
	Harl	testHarl;

	for (int i = 0; i < 0; i++)
		testHarl.complain(levels[i]);
}
