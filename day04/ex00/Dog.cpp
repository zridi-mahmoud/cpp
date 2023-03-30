/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:16:50 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/07 16:19:24 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog created with default constructor" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
    *this = src;
    std::cout << "Dog created by copy" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    Animal::operator=(rhs);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}
