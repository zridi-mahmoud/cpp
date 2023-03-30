/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:13:10 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/08 18:55:00 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal created with default constructor" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal created with type " << type << std::endl;
}

Animal::Animal(Animal const & src)
{
    *this = src;
    std::cout << "Animal created by copy" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
    this->type = rhs.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "This animal doesn't make any sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}