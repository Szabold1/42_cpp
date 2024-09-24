/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:23:32 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/24 09:30:49 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void) {
	std::cout << "----- Test 1 -----" << std::endl;
	Zombie	*horde1 = zombieHorde(5, "one");
	if (horde1) {
		for (int i = 0; i < 5; i++) {
			horde1[i].announce();
		}
		delete[] horde1;
	}

	std::cout << "----- Test 2 -----" << std::endl;
	Zombie	*horde2 = zombieHorde(7, "two");
	if (horde2) {
		for (int i = 0; i < 7; i++) {
			horde2[i].announce();
		}
		delete[] horde2;
	}
}