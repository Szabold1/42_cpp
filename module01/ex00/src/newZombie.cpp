/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 21:20:41 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/04 13:17:13 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// create a new zombie with the given name and return it
Zombie	*newZombie(std::string name) {
	return new(std::nothrow) Zombie(name);
}