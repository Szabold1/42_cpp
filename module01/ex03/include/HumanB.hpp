/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:13:48 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/06 12:04:06 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack(void);
};

#endif