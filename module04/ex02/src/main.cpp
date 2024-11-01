/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:05:45 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 16:10:48 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "../include/Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const int NB_ANIMALS = 4;

    std::cout << "\n---------- Test #1 ---------" << std::endl;
    AAnimal* animals[10];

    for (int i = 0; i < NB_ANIMALS; i++) {
        if (i % 2 == 0) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < NB_ANIMALS; i++) {
        animals[i]->makeSound();
    }

    std::cout << std::endl;

    for (int i = 0; i < NB_ANIMALS; i++) {
        delete animals[i];
    }

    std::cout << "\n---------- Test #2 ---------" << std::endl;
    Dog d1;
    d1.setIdea(0, "First idea");
    std::cout << std::endl;

    Dog d2;
    std::cout << std::endl;
    Dog d3(d1);  // Test copy constructor
    std::cout << std::endl;
    d2 = d1;     // Test copy assignment operator
    std::cout << std::endl;

    // Change ideas in d1 to test if d2 and d3 are unaffected
    d1.setIdea(0, "Some new idea");

    // Output to verify deep copy
    std::cout << "d1 idea 0: " << d1.getIdea(0) << std::endl;
    std::cout << "d2 idea 0: " << d2.getIdea(0) << std::endl;
    std::cout << "d3 idea 0: " << d3.getIdea(0) << std::endl;

    std::cout << std::endl;

    return 0;
}