/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:19:11 by bszabo            #+#    #+#             */
/*   Updated: 2024/10/29 15:38:05 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat(void);
        WrongCat(const WrongCat& src);
        ~WrongCat(void);
        WrongCat& operator=(const WrongCat& rhs);

        // member functions
        void makeSound(void) const;
};

#endif