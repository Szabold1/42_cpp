/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 11:20:08 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/24 09:32:31 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string> // std::string
#include <iostream> // std::cout, std::endl
#include <new>

class Zombie {
private:
	std::string	name;

public:
	// default constructors
	Zombie(void);
	Zombie(std::string name);

	// default destructor
	~Zombie();

	void	announce(void);
	void	setName(std::string str);
};

Zombie*	zombieHorde(int N, std::string name);

#endif