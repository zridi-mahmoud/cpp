/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzridi <mzridi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:45:36 by mzridi            #+#    #+#             */
/*   Updated: 2023/03/06 23:34:15 by mzridi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"


FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap created with default constructor" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << getName() << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    *this = src;
    std::cout << "FragTrap " << getName() << " created by copy" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &rhs)
{
    ClapTrap::operator=(rhs);
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << getName() << " is giving high fives to everyone" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}