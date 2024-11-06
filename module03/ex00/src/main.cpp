/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:47:38 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/05 13:50:28 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // Create ClapTrap instances
    ClapTrap clap1("ClapOne");
    ClapTrap clap2("ClapTwo");

    std::cout << "\n--- Initial Status ---\n";
    std::cout << "ClapOne HP: " << clap1.getHitPoints() << ", Energy: " << clap1.getEnergyPoints() << "\n";
    std::cout << "ClapTwo HP: " << clap2.getHitPoints() << ", Energy: " << clap2.getEnergyPoints() << "\n\n";

    // Test attack
    std::cout << "--- ClapOne Attacks ClapTwo ---\n";
    clap1.setAttackDamage(3); // Set some attack damage for testing
    clap1.attack("ClapTwo");
    clap2.takeDamage(clap1.getAttackDamage());

    std::cout << "\n--- After Attack Status ---\n";
    std::cout << "ClapOne HP: " << clap1.getHitPoints() << ", Energy: " << clap1.getEnergyPoints() << "\n";
    std::cout << "ClapTwo HP: " << clap2.getHitPoints() << ", Energy: " << clap2.getEnergyPoints() << "\n\n";

    // Test repair
    std::cout << "--- ClapTwo Repairs Itself ---\n";
    clap2.beRepaired(25);

    std::cout << "\n--- After Repair Status ---\n";
    std::cout << "ClapTwo HP: " << clap2.getHitPoints() << ", Energy: " << clap2.getEnergyPoints() << "\n\n";

    // Test energy exhaustion
    std::cout << "--- Exhausting ClapOne's Energy ---\n";
    while (clap1.getEnergyPoints() > 0) {
        clap1.attack("ClapTwo");
        clap2.takeDamage(clap1.getAttackDamage());
    }
    // Final attempt when energy is depleted
    clap1.attack("ClapTwo");

    std::cout << "\n--- Final Status ---\n";
    std::cout << "ClapOne HP: " << clap1.getHitPoints() << ", Energy: " << clap1.getEnergyPoints() << "\n";
    std::cout << "ClapTwo HP: " << clap2.getHitPoints() << ", Energy: " << clap2.getEnergyPoints() << "\n";

    return 0;
}