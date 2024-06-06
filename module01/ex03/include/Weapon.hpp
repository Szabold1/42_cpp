/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:00:55 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/06 11:36:09 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
	std::string	type;

public:
	Weapon(std::string type);
	const std::string &getType(void);
	void setType(std::string type);
};

#endif