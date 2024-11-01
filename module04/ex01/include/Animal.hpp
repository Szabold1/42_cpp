/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:06:26 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 15:19:40 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
    protected:
        std::string type;

    public:
        Animal(void);
        Animal(const Animal& src);
        virtual ~Animal(void);
        Animal& operator=(const Animal& rhs);

        // getters
        std::string getType(void) const;

        // setters
        void setType(std::string newType);

        // member functions
        virtual void makeSound(void) const;

        // helpers
        void printColoredMessage(std::string message, std::string color) const;
};

#endif