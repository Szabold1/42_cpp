/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/06 09:49:02 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    // Creating a ClapTrap and a ScavTrap instance
    ClapTrap clap("clap");
    ScavTrap scav("scav");

    // Check initial attribute values
    std::cout << "\n--- Checking ScavTrap initial attributes ---\n";
    std::cout << "Name: " << scav.getName() << std::endl;
    std::cout << "Hit Points: " << scav.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scav.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scav.getAttackDamage() << std::endl;

    std::cout << "\n--- Testing ScavTrap Inherited and Overridden Functions ---\n";
    
    // Test overridden attack function from ScavTrap
    scav.attack("Enemy");

    // Test if ClapTrap inherited functions work for ScavTrap
    scav.takeDamage(15);
    scav.beRepaired(10);

    std::cout << "\n--- Testing ScavTrap Special Function ---\n";
    scav.guardGate();

    std::cout << "\n--- Final State Check ---\n";
    std::cout << scav.getName() << " - Hit Points: " << scav.getHitPoints()
              << ", Energy Points: " << scav.getEnergyPoints()
              << ", Attack Damage: " << scav.getAttackDamage() << std::endl;

    return 0;
}