/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:30:19 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/08 19:04:49 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    // const Animal *meta = new Animal(); // this is an abstract class so we can't instantiate it
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *wronganimal = new WrongCat();
    const Cat *cat = new Cat();
    const Dog *dog = new Dog();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    wronganimal->makeSound();
    cat->makeSound();
    dog->makeSound();
    delete cat;
    delete dog;
    delete i;
    delete j;
    delete wronganimal;
    return 0;
}