/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:30:19 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 08:47:45 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *wronganimal = new WrongCat();
    const WrongAnimal *wronganimal2 = new WrongAnimal();
    const Cat *cat = new Cat();
    const Dog *dog = new Dog();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    wronganimal->makeSound();
    wronganimal2->makeSound();
    cat->makeSound();
    dog->makeSound();
    delete cat;
    delete dog;
    delete i;
    delete j;
    delete meta;
    delete wronganimal;


    return 0;
}