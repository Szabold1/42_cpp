/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:23:55 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/04 14:02:37 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

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

// set the name of the zombie
void	Zombie::setName(std::string str) {
	name = str;
}