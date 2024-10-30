/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:47:40 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/28 20:43:48 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap {
    // private:
    //     ScavTrap(void); // private default constructor so an instance can't be created without name

    public:
        ScavTrap(void);
        ScavTrap(const std::string& name);

        ScavTrap(const ScavTrap& src); // copy constructor
        ScavTrap& operator=(const ScavTrap& rhs); // copy assignment operator overload

        ~ScavTrap(void);
        
        void attack(const std::string& target);
        void guardGate(void);
};

#endif