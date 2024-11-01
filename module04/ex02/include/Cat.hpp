/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:57:04 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 16:06:58 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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