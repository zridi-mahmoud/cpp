/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 21:22:30 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/07 21:23:44 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & src) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs) {
    std::cout << "WrongCat assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}