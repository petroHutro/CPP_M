#include <iostream>
#include <fstream>

std::string	ft_replace(std::string str, std::string s1, std::string s2)
{
	int			size_s1 = s1.size();
	size_t		index;

	while ((index = str.find(s1)) != std::string::npos)
	{
		str = str.insert(index + size_s1, s2);
		str = str.erase(index, size_s1);
	}
	return (str);
}

void	file_replace(std::string file, std::string s1, std::string s2)
{
	std::ifstream	in;
	std::ofstream	out;
	std::string		line;

	if (s1.empty())
		return ;
	in.open(file.c_str());
	if (!in.is_open())
		return ;
	out.open((file + ".replace").c_str());
	if (out.is_open())
	{
		while (getline(in, line))
		{
			if (!in.eof())
				out << ft_replace(line, s1, s2) << std::endl;
			else
				out << ft_replace(line, s1, s2);
		}
		out.close();
	}
	in.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	file_replace(argv[1], argv[2], argv[3]);
	return (0);
}
