/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:23:32 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/04 13:35:38 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	std::cout << "----- Zombie 1 -----" << std::endl;
	Zombie	z1;
	z1.announce();

	std::cout << "----- Zombie 2 -----" << std::endl;
	Zombie	z2("z2");
	z2.announce();

	std::cout << "----- Zombie 3 -----" << std::endl;
	Zombie	*z3 = newZombie("z3");
	if (z3)
		z3->announce();
	else
		std::cout << "ERROR: memory allocation failed" << std::endl;
	delete z3;

	std::cout << "----- Zombie 4 -----" << std::endl;
	randomChump("z4");
}