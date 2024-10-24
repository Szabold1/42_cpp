/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:20:49 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/24 11:02:37 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

    ClapTrap(void); // private default constructor so an instance can't be created without name
    
public:
    ClapTrap(std::string name);

    ClapTrap(const ClapTrap& src); // copy constructor
    ClapTrap& operator=(const ClapTrap& rhs); // copy assignment operator overload
   
    ~ClapTrap(void);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    // getters
    std::string getName(void) const;
    int getHitPoints(void) const;
    int getEnergyPoints(void) const;
    int getAttackDamage(void) const;

    // setters
    void setName(std::string newName);
    void setHitPoints(int newHitPoints);
    void setEnergyPoints(int newEnergyPoints);
    void setAttackDamage(int newAttackDamage);
};

#endif