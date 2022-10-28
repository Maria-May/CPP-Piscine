#include "Harl.hpp"

int	main(int	argc, char	**argv)
{
	Harl	testHarl;

	if (argc != 2)
	{
		std::cerr << "Error: bad number of arguments" << std::endl;
		return (1);
	}
	testHarl.complain(argv[1]);
	return (0);
}