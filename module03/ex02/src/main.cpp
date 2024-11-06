/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/06 09:53:32 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// Test FragTrap's special method and attribute setup
int main() {
    // Create a FragTrap instance
    std::cout << "Creating FragTrap C...\n";
    FragTrap C("clap");

    // Check initial attribute values
    std::cout << "\n--- Checking FragTrap initial attributes ---\n";
    std::cout << "Name: " << C.getName() << std::endl;
    std::cout << "Hit Points: " << C.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << C.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << C.getAttackDamage() << std::endl;

    // Perform an attack and display result
    std::cout << "\n--- FragTrap attack test ---\n";
    C.attack("Enemy");

    // Perform a high five
    std::cout << "\n--- FragTrap high five test ---\n";
    C.highFivesGuys();

    // Repair FragTrap
    std::cout << "\n--- FragTrap repair test ---\n";
    C.beRepaired(20);

    // Damage FragTrap
    std::cout << "\n--- FragTrap take damage test ---\n";
    C.takeDamage(50);

    // Check final state after operations
    std::cout << "\n--- Final state of FragTrap C ---\n";
    std::cout << "Hit Points: " << C.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << C.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << C.getAttackDamage() << std::endl;

    std::cout << "\nExiting test...\n";
    return 0;
}