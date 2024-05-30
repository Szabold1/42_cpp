#include <iostream> // cout, endl
#include <string> // string
#include <cctype> // toupper

// convert string 'str' to upper case and return it
std::string	str_toupper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
			std::cout << str_toupper(argv[i]);
	}
	std::cout << std::endl;
	return (0);
}