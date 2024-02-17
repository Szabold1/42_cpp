#include <iostream>
#include <cctype>
#include <string>

// convert string 'str' to upper case and return it
std::string	str_toupper(std::string *str)
{
	std::string	upper_str = *str;

	for (int i = 0; upper_str[i]; i++)
		upper_str[i] = std::toupper(upper_str[i]);
	return (upper_str);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
		{

			std::string str = argv[i];
			str = str_toupper(&str);
			std::cout << str;
		}
	}
	std::cout << std::endl;
	return (0);
}