/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:08 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 12:33:21 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain* brain;

    public:
        Dog(void);
        Dog(const Dog& src);
        ~Dog(void);
        Dog& operator=(const Dog& rhs);

        // member functions
        void makeSound(void) const;

        // getters, setters
        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea);
};

#endif