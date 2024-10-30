/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:28:30 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 08:29:53 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
    std::string name;

    DiamondTrap(void); // private default constructor so an instance can't be created without name

public:
    DiamondTrap(const std::string& name);

    DiamondTrap(const DiamondTrap& src); // copy constructor
    DiamondTrap& operator=(const DiamondTrap& rhs); // copy assignment operator overload
    
    ~DiamondTrap();

    void whoAmI();

    void attack(const std::string& target); // override the ClapTrap::attack function
};

#endif