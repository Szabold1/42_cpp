/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:20:27 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/03 11:30:08 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout, endl
#include <string> // string
#include <cctype> // toupper

// convert string 'str' to upper case and return it
std::string	str_toupper(std::string str) {
	int len = str.length();

	for (int i = 0; i < len; i++)
		str[i] = toupper(str[i]);
	return (str);
}

int	main(int argc, char *argv[]) {
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