/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:51:02 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/06 09:28:34 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
    private:
        FragTrap(void); // private default constructor so an instance can't be created without name

    public:
        FragTrap(const std::string& name);

        FragTrap(const FragTrap& src); // copy constructor
        FragTrap& operator=(const FragTrap& rhs); // copy assignment operator overload

        ~FragTrap(void);
        
        void highFivesGuys(void);
};

#endif