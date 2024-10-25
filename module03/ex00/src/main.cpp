/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/25 13:05:55 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// 'A' attacks 'B'
static void attack(ClapTrap& A, ClapTrap& B) {
    if (B.getHitPoints() <= 5)
        B.beRepaired(50);

    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());

    std::cout << std::endl;
}

static void showEnergyPoints(ClapTrap& A, ClapTrap& B) {
    std::cout << "----------" << std::endl;
    std::cout << "Energy points left" << std::endl;
    std::cout << A.getName() << " has " << A.getEnergyPoints() << std::endl;
    std::cout << B.getName() << " has " << B.getEnergyPoints() << std::endl;
    std::cout << "----------" << std::endl;
}

int main(void) {
    ClapTrap A("A");
    ClapTrap B("B");

    showEnergyPoints(A, B);

    A.setAttackDamage(6);

    for (int i = 0; i < 5; i++) {
        std::cout << "Attack #" << i + 1 << std::endl;
        attack(A, B);
    }

    showEnergyPoints(A, B);
}