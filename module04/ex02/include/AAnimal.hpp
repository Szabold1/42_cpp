/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:06:26 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 16:00:54 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal {
    protected:
        std::string type;

    public:
        AAnimal(void);
        AAnimal(const AAnimal& src);
        virtual ~AAnimal(void);
        AAnimal& operator=(const AAnimal& rhs);

        // getters
        std::string getType(void) const;

        // setters
        void setType(std::string newType);

        // member functions
        virtual void makeSound(void) const = 0; // pure virtual function

        // helpers
        void printColoredMessage(std::string message, std::string color) const;
};

#endif