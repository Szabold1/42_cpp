/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bszabo <bszabo@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:05:45 by bszabo            #+#    #+#             */
/*   Updated: 2024/11/01 11:11:33 by bszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    std::cout << "Creating animals...\n";

    const Animal* a = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();
    const Animal* copyA = new Animal(*a);

    std::cout << "\nAnimal types and sounds:\n";
    std::cout << "Type of a (Animal): " << a->getType() << std::endl;
    std::cout << "Type of d (Dog): " << d->getType() << std::endl;
    std::cout << "Type of c (Cat): " << c->getType() << std::endl;
    std::cout << "Type of copyA (Animal): " << copyA->getType() << std::endl;
    a->makeSound();
    d->makeSound();
    c->makeSound();
    copyA->makeSound();

    std::cout << "\nTesting wrong animals...\n";
    const WrongAnimal* wrongA = new WrongAnimal();
    const WrongAnimal* wrongC = new WrongCat();

    std::cout << "Type of wrongA (WrongAnimal): " << wrongA->getType() << std::endl;
    std::cout << "Type of wrongC (WrongCat): " << wrongC->getType() << std::endl;
    wrongA->makeSound();
    wrongC->makeSound();

    // Clean up
    delete a;
    delete d;
    delete c;
    delete copyA;
    delete wrongA;
    delete wrongC;

    return 0;
}