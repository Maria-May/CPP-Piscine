#include <iostream>
#include <fstream>

std::string	replaceLine(std::string line, std::string s1, std::string s2)
{
	int	sizeS1 = s1.size();
	size_t	index;

	while ((index = line.find(s1)) != std::string::npos)
	{
		line = line.insert(index + sizeS1, s2);
		line = line.erase(index, sizeS1);
	}
	return (line);
}

int replaceStringToFile(std::string s1,std::string s2,std::string filename)
{
	std::string	outfileName;
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string	line;

	if (s1.empty())
		return (1);
	outfileName = filename + ".replace";
	infile.open(filename.c_str());
	if (!infile.is_open())
		return (1);
	outfile.open(outfileName.c_str());
	if (outfile.is_open())
	{
		while (getline(infile, line))
		{
			if (!infile.eof())
				outfile << replaceLine(line, s1, s2) << std::endl;
			else
				outfile << replaceLine(line, s1, s2);
		}
		outfile.close();
	}
	else
		return (1);
	infile.close();
	return (0);
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string	s2;
	if (argc != 4)
	{
		std::cerr << "Invalid arguments" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (replaceStringToFile(s1, s2, filename))
	{
		std::cerr << "Files error" << std::endl;
		return (1);
	}
	return (0);
}