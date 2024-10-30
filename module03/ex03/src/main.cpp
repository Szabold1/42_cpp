/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 08:36:55 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// test_diamondtrap.cpp

#include "DiamondTrap.hpp"

int main() {
    // Create a DiamondTrap instance
    std::cout << "Creating DiamondTrap...\n";
    DiamondTrap diamond("Diamond");

    // Display initial attributes
    std::cout << "\nInitial DiamondTrap attributes:\n";
    std::cout << "Hit Points: " << diamond.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << diamond.getAttackDamage() << std::endl;

    // Attack a target
    std::cout << "\nDiamondTrap attacking:\n";
    diamond.attack("Enemy");

    // Use whoAmI function
    std::cout << "\nDiamondTrap whoAmI test:\n";
    diamond.whoAmI();

    // Repair and take damage
    std::cout << "\nDiamondTrap repair and take damage tests:\n";
    diamond.beRepaired(20);
    diamond.takeDamage(50);

    // Check final state
    std::cout << "\nFinal state of DiamondTrap:\n";
    std::cout << "Hit Points: " << diamond.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << diamond.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << diamond.getAttackDamage() << std::endl;

    std::cout << "\nExiting test...\n";
    return 0;
}