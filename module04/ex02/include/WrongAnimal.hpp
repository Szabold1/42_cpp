/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:19:09 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/30 10:47:50 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string type;

    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& src);
        virtual ~WrongAnimal(void);
        WrongAnimal& operator=(const WrongAnimal& rhs);

        // getters
        std::string getType(void) const;

        // setters
        void setType(std::string newType);

        // member functions
        void makeSound(void) const;

        // helpers
        void printColoredMessage(std::string message, std::string color) const;
};

#endif