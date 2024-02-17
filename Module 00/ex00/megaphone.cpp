#include <iostream> // cout, endl
#include <string> // string
#include <cctype> // toupper

using std::cout;
using std::endl;
using std::string;
using std::toupper;

// convert string 'str' to upper case and return it
string	str_toupper(string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
			cout << str_toupper(argv[i]);
	}
	cout << endl;
	return (0);
}