/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:16:50 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/10 08:56:42 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog created with default constructor" << std::endl;
    brain = new Brain();
}

Dog::Dog(Dog const & src) : Animal(src)
{
    *this = src;
    std::cout << "Dog created by copy" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    Animal::operator=(rhs);
    this->brain = new Brain();
    for (int i = 0; i < 100; i++)
        this->brain->getIdeas()[i] = rhs.brain->getIdeas()[i];
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destroyed" << std::endl;
}
