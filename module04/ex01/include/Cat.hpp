/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:04 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 12:33:36 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* brain;

    public:
        Cat(void);
        Cat(const Cat& src);
        ~Cat(void);
        Cat& operator=(const Cat& rhs);

        // member functions
        void makeSound(void) const;

        // getters, setters
        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea);
};

#endif