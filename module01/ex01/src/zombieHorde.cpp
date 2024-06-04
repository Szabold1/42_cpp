/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 13:41:11 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/04 14:52:53 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

// create a horde of N zombies with the same name
Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new(std::nothrow) Zombie[N];
    if (!horde) {
        std::cout << "ERROR: memory allocation failed" << std::endl;
        return NULL;
    }

    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
    }

    return horde;
}