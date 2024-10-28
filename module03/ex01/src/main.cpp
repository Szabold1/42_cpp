/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/28 14:55:48 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    // Creating a ClapTrap and a ScavTrap instance
    ClapTrap clap("clap");
    ScavTrap scav("scav");

    std::cout << "\n--- Testing Constructor and Destruction Chain ---\n";
    {
        ScavTrap tempScav("TemporaryScavy");
        tempScav.attack("Test Target");
    } // This will show the destruction chain when tempScav goes out of scope

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