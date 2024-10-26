/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:47:40 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/26 12:50:25 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    private:
        ScavTrap(void); // private default constructor so an instance can't be created without name

    public:
        ScavTrap(const std::string& name);

        ScavTrap(const ScavTrap& src); // copy constructor
        ScavTrap& operator=(const ScavTrap& rhs); // copy assignment operator overload

        ~ScavTrap(void);
        
        void attack(const std::string& target);
        void guardGate(void);
};

#endif