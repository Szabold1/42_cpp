/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:09:13 by bszabo            #+#    #+#             */
/*   Updated: 2024/09/24 10:56:16 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
private:
	std::string name;
	Weapon& weapon; // reference because it can't be NULL

public:
	HumanA(std::string name, Weapon &weapon);
	void attack(void) const;
};

#endif