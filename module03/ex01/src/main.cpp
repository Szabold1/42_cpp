/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/25 13:12:36 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// 'A' attacks 'B'
static void attack(ScavTrap& A, ScavTrap& B) {
    if (B.getHitPoints() < 80)
        B.beRepaired(50);

    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());

    std::cout << std::endl;
}

static void showInfo(ClapTrap& A, ClapTrap& B) {
    std::cout << "----------" << std::endl;
    std::cout << "Energy points left" << std::endl;
    std::cout << A.getName() << " has " << A.getEnergyPoints() << std::endl;
    std::cout << B.getName() << " has " << B.getEnergyPoints() << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Hit points left" << std::endl;
    std::cout << A.getName() << " has " << A.getHitPoints() << std::endl;
    std::cout << B.getName() << " has " << B.getHitPoints() << std::endl;
    std::cout << "----------" << std::endl;
}

int main(void) {
    ScavTrap A("A");
    std::cout << "----------" << std::endl;
    ScavTrap B("B");

    showInfo(A, B);

    A.setAttackDamage(5);

    // A attacks B
    for (int i = 0; i < 6; i++) {
        std::cout << "Attack #" << i + 1 << std::endl;
        attack(A, B);
    }

    // B attacks A
    for (int i = 0; i < 3; i++) {
        std::cout << "Attack #" << i + 1 << std::endl;
        attack(B, A);
    }

    A.guardGate();

    showInfo(A, B);
}