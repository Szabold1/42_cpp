/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:08 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 15:11:20 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog(void);
        Dog(const Dog& src);
        ~Dog(void);
        Dog& operator=(const Dog& rhs);

        // member functions
        void makeSound(void) const;
};

#endif