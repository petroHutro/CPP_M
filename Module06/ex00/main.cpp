#include <iostream>
#include <iomanip>
#include <cstring>

void	print_literal(char el)
{
	std::cout << "char:" << el << std::endl;
	std::cout << "int:" << static_cast<int> (el) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float:" << static_cast<float> (el) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double:" << static_cast<double> (el) << std::endl;
}

void	print_literal(int el)
{
	if (el > 127 || el < -128)
		std::cout << "char: impossible" << std::endl;
	else if(isprint(el))
		std::cout << "char: '" << static_cast<char> (el) << "'" << std::endl;
	else 
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int:" << el << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float:" << static_cast<float> (el) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double:" << static_cast<double> (el) << std::endl;
}

void	print_literal(float el)
{
	if (el > 127 || el < -128)
		std::cout << "char: impossible" << std::endl;
	else if(isprint(el))
		std::cout << "char: '" << static_cast<char> (el) << "'" << std::endl;
	else 
		std::cout << "char: Non displayable" << std::endl;
	if (el >= INT32_MIN && el <= INT32_MAX)
		std::cout << "int:" << static_cast<int> (el) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float:" << el << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double:" << static_cast<double> (el) << std::endl;
}

void	print_literal(double el)
{
	if (el > 127 || el < -128)
		std::cout << "char: impossible" << std::endl;
	else if(isprint(el))
		std::cout << "char: '" << static_cast<char> (el) << "'" << std::endl;
	else 
		std::cout << "char: Non displayable" << std::endl;
	if (el >= INT32_MIN && el <= INT32_MAX)
		std::cout << "int:" << static_cast<int> (el) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float:" << static_cast<float> (el) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double:" << el << std::endl;
}

void print_error()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

int	isdigit_str(std::string str, size_t size)
{
	for (size_t i = 0; i < size; i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

void	convert_literal(std::string str)
{
	int		size = str.size();
	char	*endp;

	if (size == 1 && !isdigit(str[0]))
		return print_literal(str[0]);
	if (isdigit_str(str, size))
	{
		long	temp_int = strtol(str.c_str(), &endp, 10);
		if (errno == ERANGE || *endp != 0 || temp_int < INT32_MIN || temp_int > INT32_MAX)
			return print_error();
		else
			return print_literal(static_cast<int> (temp_int));
	}
	if (str[size - 1] == 'f' && isdigit(str[size - 2]))
	{
		float val_float = strtof(str.c_str(), &endp);
		str[size - 1] = 0;
		if (errno == ERANGE || *endp != 0)
			return print_error();
		else
			return print_literal(val_float);
	}
	if (isdigit(str[size - 1]))
	{
		double temp_double = strtod(str.c_str(), &endp);
		if (errno == ERANGE || *endp != 0)
			return print_error();
		else
			return print_literal(temp_double);
	}
	print_error();
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		convert_literal(argv[1]);
		return (0);
	}
	std::cout << "Wrong argc" << std::endl;
	return (1);
}
