/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:04 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 15:11:17 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat(void);
        Cat(const Cat& src);
        ~Cat(void);
        Cat& operator=(const Cat& rhs);

        // member functions
        void makeSound(void) const;
};

#endif