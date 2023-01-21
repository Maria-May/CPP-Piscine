#include <iostream>

void convertAndDisplay(std::string str)
{
	std::cout << "char: ";
	try
	{
		if (str.size() == 1 && !isdigit(str[0]))
			std::cout << "'" << static_cast<char>(str[0]) << "'" << std::endl;
		else
		{
			std::size_t temp;
			temp = std::stoi(str);
			if (isprint(temp))
				std::cout << "'" << static_cast<char>(temp) << "'" << std::endl;
			else
				throw std::out_of_range("Non displayable");
		}
	}
	catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	try
	{
		int temp;
		temp = std::stoi(str);
		std::cout << static_cast<int>(temp) << std::endl;
	}
	catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "Non displayable" << std::endl;
	}
	std::cout << "float: ";
	try
	{
		float temp;
		temp = std::stof(str);
		std::cout << static_cast<float>(temp);
		if (temp == static_cast<int>(temp))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "Non displayable" << std::endl;
	}
	std::cout << "double: ";
	try
	{
		double temp;
		temp = std::stod(str);
		std::cout << static_cast<double>(temp);
		if (temp == static_cast<int>(temp))
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch (std::invalid_argument&)
	{
		std::cout << "impossible" << std::endl;
	}
	catch (std::out_of_range&)
	{
		std::cout << "Non displayable" << std::endl;
	}
}

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Not enough arguments" << std::endl;
		return EXIT_FAILURE;
	}
	std::string str = static_cast<std::string>(argv[1]);
	convertAndDisplay(str);
	return EXIT_SUCCESS;
}
