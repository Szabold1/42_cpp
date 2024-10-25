/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/25 17:16:31 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// 'A' attacks 'B'
static void attack(ScavTrap& A, FragTrap& B) {
    if (B.getHitPoints() < 80)
        B.beRepaired(50);

    A.attack(B.getName());
    B.takeDamage(A.getAttackDamage());

    std::cout << std::endl;
}

static void showInfo(ClapTrap& A, ClapTrap& B, ClapTrap& C) {
    std::cout << "----------" << std::endl;
    std::cout << "Energy points left" << std::endl;
    std::cout << A.getName() << " has " << A.getEnergyPoints() << std::endl;
    std::cout << B.getName() << " has " << B.getEnergyPoints() << std::endl;
    std::cout << C.getName() << " has " << C.getEnergyPoints() << std::endl;
    std::cout << "----------" << std::endl;
    std::cout << "Hit points left" << std::endl;
    std::cout << A.getName() << " has " << A.getHitPoints() << std::endl;
    std::cout << B.getName() << " has " << B.getHitPoints() << std::endl;
    std::cout << C.getName() << " has " << C.getHitPoints() << std::endl;
    std::cout << "----------" << std::endl;
}

int main(void) {
    ClapTrap A("A");
    std::cout << "----------" << std::endl;
    ScavTrap B("B");
    FragTrap C("C");

    showInfo(A, B, C);

    A.setAttackDamage(5);

    // B attacks C (ScavTrap -> FragTrap)
    for (int i = 0; i < 6; i++) {
        std::cout << "Attack #" << i + 1 << std::endl;
        attack(B, C);
    }

    std::cout << "Last attack" << std::endl;
    C.attack(A.getName());
    A.takeDamage(C.getAttackDamage());

    std::cout << std::endl;
    C.highFivesGuys();

    showInfo(A, B, C);
}