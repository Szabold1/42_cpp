/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:23:55 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/04 13:27:16 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// default constructors
Zombie::Zombie(void) : name("noName") {}

Zombie::Zombie(std::string name) : name(name) {}

// default destructor
Zombie::~Zombie() {
	std::cout << name << " is destroyed." << std::endl;
}

// announce the zombie
void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}