/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 15:04:02 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/04 15:50:17 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string	str = "HI THIS IS BRAIN";

	// pointer to a string
	std::string	*stringPTR = &str;

	// reference to a string
	std::string	&stringREF = str;

	std::cout << "Address of the string:\t\t\t\t" << &str << std::endl;
	std::cout << "Address of the string using the pointer:\t" << stringPTR << std::endl;
	std::cout << "Address of the string using the reference:\t" << &stringREF << std::endl;
	std::cout << std::endl;
	
	std::cout << "String:\t\t\t\t" << str << std::endl;
	std::cout << "String using the pointer:\t" << *stringPTR << std::endl;
	std::cout << "String using the reference:\t" << stringREF << std::endl;
}