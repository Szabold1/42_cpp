/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:59:33 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 12:37:24 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain& other);  // Copy constructor
        ~Brain();
        Brain& operator=(const Brain& other); // Assignment operator

        // getters, setters
        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea);

        // helpers
        void printColoredMessage(std::string message, std::string color) const;
};

#endif