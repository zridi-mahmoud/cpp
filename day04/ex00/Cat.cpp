/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:19:46 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/07 16:20:30 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat created with default constructor" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
    *this = src;
    std::cout << "Cat created by copy" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
    Animal::operator=(rhs);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}