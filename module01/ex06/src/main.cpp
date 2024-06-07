/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:32:16 by bszabo            #+#    #+#             */
/*   Updated: 2024/06/07 18:11:15 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Invalid number of arguments." << std::endl;
		return (1);
	}
	
	Harl harl;
	harl.complain(argv[1]);
}